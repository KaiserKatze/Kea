// Copyright (C) 2018-2019 Internet Systems Consortium, Inc. ("ISC")
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include <config.h>

#include <mysql_cb_dhcp6.h>
#include <mysql_cb_impl.h>
#include <mysql_query_macros_dhcp.h>
#include <asiolink/addr_utilities.h>
#include <cc/data.h>
#include <config_backend/constants.h>
#include <database/db_exceptions.h>
#include <dhcp/classify.h>
#include <dhcp/dhcp6.h>
#include <dhcp/libdhcp++.h>
#include <dhcp/option_data_types.h>
#include <dhcp/option_space.h>
#include <dhcpsrv/config_backend_dhcp6_mgr.h>
#include <dhcpsrv/network.h>
#include <dhcpsrv/pool.h>
#include <dhcpsrv/lease.h>
#include <util/buffer.h>
#include <util/boost_time_utils.h>
#include <mysql/mysql_connection.h>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/pointer_cast.hpp>
#include <boost/scoped_ptr.hpp>
#include <mysql.h>
#include <mysqld_error.h>
#include <array>
#include <sstream>
#include <utility>
#include <vector>

using namespace isc::cb;
using namespace isc::db;
using namespace isc::data;
using namespace isc::asiolink;
using namespace isc::log;
using namespace isc::util;

namespace isc {
namespace dhcp {

/// @brief Implementation of the MySQL Configuration Backend.
class MySqlConfigBackendDHCPv6Impl : public MySqlConfigBackendImpl {
public:

    /// @brief Statement tags.
    ///
    /// The contents of the enum are indexes into the list of SQL statements.
    /// It is assumed that the order is such that the indices of statements
    /// reading the database are less than those of statements modifying the
    /// database.
    enum StatementIndex {
        CREATE_AUDIT_REVISION,
        GET_GLOBAL_PARAMETER6,
        GET_ALL_GLOBAL_PARAMETERS6,
        GET_MODIFIED_GLOBAL_PARAMETERS6,
        GET_SUBNET6_ID,
        GET_SUBNET6_PREFIX,
        GET_ALL_SUBNETS6,
        GET_MODIFIED_SUBNETS6,
        GET_SHARED_NETWORK_SUBNETS6,
        GET_POOL6_RANGE,
        GET_PD_POOL,
        GET_SHARED_NETWORK6_NAME,
        GET_ALL_SHARED_NETWORKS6,
        GET_MODIFIED_SHARED_NETWORKS6,
        GET_OPTION_DEF6_CODE_SPACE,
        GET_ALL_OPTION_DEFS6,
        GET_MODIFIED_OPTION_DEFS6,
        GET_OPTION6_CODE_SPACE,
        GET_ALL_OPTIONS6,
        GET_MODIFIED_OPTIONS6,
        GET_OPTION6_SUBNET_ID_CODE_SPACE,
        GET_OPTION6_POOL_ID_CODE_SPACE,
        GET_OPTION6_PD_POOL_ID_CODE_SPACE,
        GET_OPTION6_SHARED_NETWORK_CODE_SPACE,
        GET_AUDIT_ENTRIES6_TIME,
        INSERT_GLOBAL_PARAMETER6,
        INSERT_GLOBAL_PARAMETER6_SERVER,
        INSERT_SUBNET6,
        INSERT_SUBNET6_SERVER,
        INSERT_POOL6,
        INSERT_PD_POOL,
        INSERT_SHARED_NETWORK6,
        INSERT_SHARED_NETWORK6_SERVER,
        INSERT_OPTION_DEF6,
        INSERT_OPTION_DEF6_SERVER,
        INSERT_OPTION6,
        INSERT_OPTION6_SERVER,
        UPDATE_GLOBAL_PARAMETER6,
        UPDATE_SUBNET6,
        UPDATE_SHARED_NETWORK6,
        UPDATE_OPTION_DEF6,
        UPDATE_OPTION6,
        UPDATE_OPTION6_SUBNET_ID,
        UPDATE_OPTION6_POOL_ID,
        UPDATE_OPTION6_PD_POOL_ID,
        UPDATE_OPTION6_SHARED_NETWORK,
        DELETE_GLOBAL_PARAMETER6,
        DELETE_ALL_GLOBAL_PARAMETERS6,
        DELETE_SUBNET6_ID,
        DELETE_SUBNET6_PREFIX,
        DELETE_ALL_SUBNETS6,
        DELETE_ALL_SUBNETS6_SHARED_NETWORK_NAME,
        DELETE_POOLS6_SUBNET_ID,
        DELETE_PD_POOLS_SUBNET_ID,
        DELETE_SHARED_NETWORK6_NAME,
        DELETE_ALL_SHARED_NETWORKS6,
        DELETE_OPTION_DEF6_CODE_NAME,
        DELETE_ALL_OPTION_DEFS6,
        DELETE_OPTION6,
        DELETE_OPTION6_SUBNET_ID,
        DELETE_OPTION6_POOL_RANGE,
        DELETE_OPTION6_PD_POOL,
        DELETE_OPTION6_SHARED_NETWORK,
        DELETE_OPTIONS6_SUBNET_ID,
        DELETE_OPTIONS6_SHARED_NETWORK,
        NUM_STATEMENTS
    };

    /// @brief Constructor.
    ///
    /// @param parameters A data structure relating keywords and values
    /// concerned with the database.
    explicit MySqlConfigBackendDHCPv6Impl(const DatabaseConnection::ParameterMap&
                                          parameters);

    /// @brief Sends query to retrieve global parameter.
    ///
    /// @param server_selector Server selector.
    /// @param name Name of the parameter to be retrieved.
    ///
    /// @return Pointer to the retrieved value or null if such parameter
    /// doesn't exist.
    StampedValuePtr getGlobalParameter6(const ServerSelector& server_selector,
                                        const std::string& name) {
        StampedValueCollection parameters;

        auto tags = getServerTags(server_selector);
        for (auto tag : tags) {
            MySqlBindingCollection in_bindings = {
                MySqlBinding::createString(tag),
                MySqlBinding::createString(name)
            };

            getGlobalParameters(GET_GLOBAL_PARAMETER6, in_bindings, parameters);
        }

        return (parameters.empty() ? StampedValuePtr() : *parameters.begin());
    }

    /// @brief Sends query to insert or update global parameter.
    ///
    /// @param server_selector Server selector.
    /// @param name Name of the global parameter.
    /// @param value Value of the global parameter.
    void createUpdateGlobalParameter6(const db::ServerSelector& server_selector,
                                      const StampedValuePtr& value) {

        if (server_selector.amUnassigned()) {
            isc_throw(NotImplemented, "managing configuration for no particular server"
                      " (unassigned) is unsupported at the moment");
        }

        auto tag = getServerTag(server_selector, "creating or updating global parameter");

        MySqlBindingCollection in_bindings = {
            MySqlBinding::createString(value->getName()),
            MySqlBinding::createString(value->getValue()),
            MySqlBinding::createInteger<uint8_t>(value->getType()),
            MySqlBinding::createTimestamp(value->getModificationTime()),
            MySqlBinding::createString(tag),
            MySqlBinding::createString(value->getName())
        };

        MySqlTransaction transaction(conn_);

        // Create scoped audit revision. As long as this instance exists
        // no new audit revisions are created in any subsequent calls.
        ScopedAuditRevision
            audit_revision(this, MySqlConfigBackendDHCPv6Impl::CREATE_AUDIT_REVISION,
                           server_selector, "global parameter set", false);

        // Try to update the existing row.
        if (conn_.updateDeleteQuery(MySqlConfigBackendDHCPv6Impl::UPDATE_GLOBAL_PARAMETER6,
                                    in_bindings) == 0) {

            // No such parameter found, so let's insert it. We have to adjust the
            // bindings collection to match the prepared statement for insert.
            in_bindings.pop_back();
            in_bindings.pop_back();
            conn_.insertQuery(MySqlConfigBackendDHCPv6Impl::INSERT_GLOBAL_PARAMETER6,
                              in_bindings);

            // Successfully inserted global parameter. Now, we have to associate it
            // with the server tag.

            // Let's first get the primary key of the global parameter.
            uint64_t id = mysql_insert_id(conn_.mysql_);

            // Create bindings for inserting the association into
            // dhcp6_global_parameter_server table.
            MySqlBindingCollection in_server_bindings = {
                MySqlBinding::createInteger<uint64_t>(id), // parameter_id
                MySqlBinding::createString(tag), // tag used to obtain server_id
                MySqlBinding::createTimestamp(value->getModificationTime()), // modification_ts
            };

            // Insert association.
            conn_.insertQuery(MySqlConfigBackendDHCPv6Impl::INSERT_GLOBAL_PARAMETER6_SERVER,
                              in_server_bindings);

        }

        transaction.commit();
    }

    /// @brief Sends query to the database to retrieve multiple subnets.
    ///
    /// Query should order subnets by subnet_id.
    ///
    /// @param index Index of the query to be used.
    /// @param in_bindings Input bindings specifying selection criteria. The
    /// size of the bindings collection must match the number of placeholders
    /// in the prepared statement. The input bindings collection must be empty
    /// if the query contains no WHERE clause.
    /// @param [out] subnets Reference to the container where fetched subnets
    /// will be inserted.
    void getSubnets6(const StatementIndex& index,
                     const MySqlBindingCollection& in_bindings,
                     Subnet6Collection& subnets) {
        // Create output bindings. The order must match that in the prepared
        // statement.
        MySqlBindingCollection out_bindings = {
            MySqlBinding::createInteger<uint32_t>(), // subnet_id
            MySqlBinding::createString(SUBNET6_PREFIX_BUF_LENGTH), // subnet_prefix
            MySqlBinding::createString(CLIENT_CLASS_BUF_LENGTH), // client_class
            MySqlBinding::createString(INTERFACE_BUF_LENGTH), // interface
            MySqlBinding::createTimestamp(), // modification_ts
            MySqlBinding::createInteger<uint32_t>(), // preferred_lifetime
            MySqlBinding::createInteger<uint8_t>(), // rapid_commit
            MySqlBinding::createInteger<uint32_t>(), // rebind_timer
            MySqlBinding::createString(RELAY_BUF_LENGTH), // relay
            MySqlBinding::createInteger<uint32_t>(), // renew_timer
            MySqlBinding::createString(REQUIRE_CLIENT_CLASSES_BUF_LENGTH), // require_client_classes
            MySqlBinding::createInteger<uint8_t>(), // reservation_mode
            MySqlBinding::createString(SHARED_NETWORK_NAME_BUF_LENGTH), // shared_network_name
            MySqlBinding::createString(USER_CONTEXT_BUF_LENGTH), // user_context
            MySqlBinding::createInteger<uint32_t>(), // valid_lifetime
            MySqlBinding::createInteger<uint64_t>(), // pool: id
            MySqlBinding::createString(POOL_ADDRESS6_BUF_LENGTH), // pool: start_address
            MySqlBinding::createString(POOL_ADDRESS6_BUF_LENGTH), // pool: end_address
            MySqlBinding::createInteger<uint32_t>(), // pool: subnet_id
            MySqlBinding::createTimestamp(), // pool: modification_ts
            MySqlBinding::createInteger<uint64_t>(), // pd pool: id
            MySqlBinding::createString(POOL_ADDRESS6_BUF_LENGTH), // pd pool: prefix
            MySqlBinding::createInteger<uint8_t>(), // pd pool: prefix_length
            MySqlBinding::createInteger<uint8_t>(), // pd pool: delegated_prefix_length
            MySqlBinding::createInteger<uint32_t>(), // pd pool: subnet_id
            MySqlBinding::createTimestamp(), // pd pool: modification_ts
            MySqlBinding::createInteger<uint64_t>(), // pool option: option_id
            MySqlBinding::createInteger<uint16_t>(), // pool option: code
            MySqlBinding::createBlob(OPTION_VALUE_BUF_LENGTH), // pool option: value
            MySqlBinding::createString(FORMATTED_OPTION_VALUE_BUF_LENGTH), // pool option: formatted_value
            MySqlBinding::createString(OPTION_SPACE_BUF_LENGTH), // pool option: space
            MySqlBinding::createInteger<uint8_t>(), // pool option: persistent
            MySqlBinding::createInteger<uint32_t>(), // pool option: dhcp6_subnet_id
            MySqlBinding::createInteger<uint8_t>(), // pool option: scope_id
            MySqlBinding::createString(USER_CONTEXT_BUF_LENGTH), // pool option: user_context
            MySqlBinding::createString(SHARED_NETWORK_NAME_BUF_LENGTH), // pool option: shared_network_name
            MySqlBinding::createInteger<uint64_t>(), // pool option: pool_id
            MySqlBinding::createTimestamp(), // pool option: modification_ts
            MySqlBinding::createInteger<uint64_t>(), // pool option: pd_pool_id
            MySqlBinding::createInteger<uint64_t>(), // pd pool option: option_id
            MySqlBinding::createInteger<uint16_t>(), // pd pool option: code
            MySqlBinding::createBlob(OPTION_VALUE_BUF_LENGTH), // pd pool option: value
            MySqlBinding::createString(FORMATTED_OPTION_VALUE_BUF_LENGTH), // pd pool option: formatted_value
            MySqlBinding::createString(OPTION_SPACE_BUF_LENGTH), // pd pool option: space
            MySqlBinding::createInteger<uint8_t>(), // pd pool option: persistent
            MySqlBinding::createInteger<uint32_t>(), // pd pool option: dhcp6_subnet_id
            MySqlBinding::createInteger<uint8_t>(), // pd pool option: scope_id
            MySqlBinding::createString(USER_CONTEXT_BUF_LENGTH), // pd pool option: user_context
            MySqlBinding::createString(SHARED_NETWORK_NAME_BUF_LENGTH), // pd pool option: shared_network_name
            MySqlBinding::createInteger<uint64_t>(), // pd pool option: pool_id
            MySqlBinding::createTimestamp(), // pd pool option: modification_ts
            MySqlBinding::createInteger<uint64_t>(), // pd pool option: pd_pool_id
            MySqlBinding::createInteger<uint64_t>(), // option: option_id
            MySqlBinding::createInteger<uint16_t>(), // option: code
            MySqlBinding::createBlob(OPTION_VALUE_BUF_LENGTH), // option: value
            MySqlBinding::createString(FORMATTED_OPTION_VALUE_BUF_LENGTH), // option: formatted_value
            MySqlBinding::createString(OPTION_SPACE_BUF_LENGTH), // option: space
            MySqlBinding::createInteger<uint8_t>(), // option: persistent
            MySqlBinding::createInteger<uint32_t>(), // option: dhcp6_subnet_id
            MySqlBinding::createInteger<uint8_t>(), // option: scope_id
            MySqlBinding::createString(USER_CONTEXT_BUF_LENGTH), // option: user_context
            MySqlBinding::createString(SHARED_NETWORK_NAME_BUF_LENGTH), // option: shared_network_name
            MySqlBinding::createInteger<uint64_t>(), // option: pool_id
            MySqlBinding::createTimestamp(), // option: modification_ts
            MySqlBinding::createInteger<uint64_t>(), // option: pd_pool_id
            MySqlBinding::createInteger<uint8_t>(), // calculate_tee_times
            MySqlBinding::createInteger<float>(), // t1_percent
            MySqlBinding::createInteger<float>(), // t2_percent
            MySqlBinding::createString(SERVER_TAG_BUF_LENGTH) // server_tag
        };

        uint64_t last_pool_id = 0;
        uint64_t last_pd_pool_id = 0;
        uint64_t last_pool_option_id = 0;
        uint64_t last_pd_pool_option_id = 0;
        uint64_t last_option_id = 0;

        Pool6Ptr last_pool;
        Pool6Ptr last_pd_pool;

        // Execute actual query.
        conn_.selectQuery(index, in_bindings, out_bindings,
                          [this, &subnets, &last_pool,  &last_pd_pool,
                           &last_pool_id, &last_pd_pool_id,
                           &last_pool_option_id, &last_pd_pool_option_id,
                           &last_option_id]
                          (MySqlBindingCollection& out_bindings) {
            // Get pointer to the last subnet in the collection.
            Subnet6Ptr last_subnet;
            if (!subnets.empty()) {
                last_subnet = *subnets.rbegin();
            }

            // Subnet has been returned. Assuming that subnets are ordered by
            // subnet identifier, if the subnet identifier of the current row
            // is different than the subnet identifier of the previously returned
            // row, it means that we have to construct new subnet object.
            if (!last_subnet || (last_subnet->getID() != out_bindings[0]->getInteger<uint32_t>())) {

                // Reset pool ids, because current row defines new subnet. Subsequent
                // rows will contain pool information.
                last_pool_id = 0;
                last_pd_pool_id = 0;

                // subnet_id
                SubnetID subnet_id(out_bindings[0]->getInteger<uint32_t>());

                // subnet_prefix
                std::string subnet_prefix = out_bindings[1]->getString();
                auto prefix_pair = Subnet6::parsePrefix(subnet_prefix);

                // preferred_lifetime
                auto preferred_lifetime = createTriplet(out_bindings[5]);

                // renew_timer
                auto renew_timer = createTriplet(out_bindings[9]);

                // rebind_timer
                auto rebind_timer = createTriplet(out_bindings[7]);

                // valid_lifetime
                auto valid_lifetime = createTriplet(out_bindings[14]);

                // Create subnet with basic settings.
                last_subnet = Subnet6::create(prefix_pair.first, prefix_pair.second,
                                              renew_timer, rebind_timer,
                                              preferred_lifetime,
                                              valid_lifetime, subnet_id);

                // client_class
                if (!out_bindings[2]->amNull()) {
                    last_subnet->allowClientClass(out_bindings[2]->getString());
                }

                // interface
                if (!out_bindings[3]->amNull()) {
                    last_subnet->setIface(out_bindings[3]->getString());
                }

                // modification_ts
                last_subnet->setModificationTime(out_bindings[4]->getTimestamp());
                // 5 is preferred_lifetime

                // rapid_commit
                if (!out_bindings[6]->amNull()) {
                    last_subnet->setRapidCommit(out_bindings[6]->getBool());
                }

                // 7 is rebind_timer

                // relay
                ElementPtr relay_element = out_bindings[8]->getJSON();
                if (relay_element) {
                    if (relay_element->getType() != Element::list) {
                        isc_throw(BadValue, "invalid relay value "
                                  << out_bindings[8]->getString());
                    }
                    for (auto i = 0; i < relay_element->size(); ++i) {
                        auto relay_address_element = relay_element->get(i);
                        if (relay_address_element->getType() != Element::string) {
                            isc_throw(BadValue, "relay address must be a string");
                        }
                        last_subnet->addRelayAddress(IOAddress(relay_element->get(i)->stringValue()));
                    }
                }

                // 9 is renew_timer

                // require_client_classes
                ElementPtr require_element = out_bindings[10]->getJSON();
                if (require_element) {
                    if (require_element->getType() != Element::list) {
                        isc_throw(BadValue, "invalid require_client_classes value "
                                  << out_bindings[10]->getString());
                    }
                    for (auto i = 0; i < require_element->size(); ++i) {
                        auto require_item = require_element->get(i);
                        if (require_item->getType() != Element::string) {
                            isc_throw(BadValue, "elements of require_client_classes list must"
                                      "be valid strings");
                        }
                        last_subnet->requireClientClass(require_item->stringValue());
                    }
                }

                // reservation_mode
                if (!out_bindings[11]->amNull()) {
                    last_subnet->setHostReservationMode(static_cast<Subnet4::HRMode>
                        (out_bindings[11]->getInteger<uint8_t>()));
                }

                // shared_network_name
                if (!out_bindings[12]->amNull()) {
                    last_subnet->setSharedNetworkName(out_bindings[12]->getString());
                }

                // user_context
                ElementPtr user_context = out_bindings[13]->getJSON();
                if (user_context) {
                    last_subnet->setContext(user_context);
                }

                // 14 is valid_lifetime

                // calculate_tee_times
                if (!out_bindings[65]->amNull()) {
                    last_subnet->setCalculateTeeTimes(out_bindings[65]->getBool());
                }

                // t1_percent
                if (!out_bindings[66]->amNull()) {
                    last_subnet->setT1Percent(out_bindings[66]->getFloat());
                }

                // t2_percent
                if (!out_bindings[67]->amNull()) {
                    last_subnet->setT2Percent(out_bindings[67]->getFloat());
                }

                // server_tag
                last_subnet->setServerTag(out_bindings[68]->getString());

                // Subnet ready. Add it to the list.
                subnets.push_back(last_subnet);
            }

            // Pool is between 15 and 19

            // If the row contains information about the pool and it
            // appears to be new pool entry (checked by comparing pool
            // id), let's create the new pool and add it to the
            // subnet.
            if (!out_bindings[15]->amNull() &&
                !out_bindings[16]->getString().empty() &&
                !out_bindings[17]->getString().empty() &&
                (out_bindings[15]->getInteger<uint64_t>() > last_pool_id)) {
                last_pool_id = out_bindings[15]->getInteger<uint64_t>();
                last_pool = Pool6::create(Lease::TYPE_NA,
                                          IOAddress(out_bindings[16]->getString()),
                                          IOAddress(out_bindings[17]->getString()));
                last_subnet->addPool(last_pool);
            }

            // Pd Pool is between 20 and 25

            // If the row contains information about the pd pool and
            // it appears to be new pd pool entry (checked by
            // comparing pd pool id), let's create the new pd pool and
            // add it to the subnet.
            if (!out_bindings[20]->amNull() &&
                !out_bindings[21]->getString().empty() &&
                (out_bindings[22]->getInteger<uint8_t>() != 0) &&
                (out_bindings[23]->getInteger<uint8_t>() != 0) &&
                (out_bindings[20]->getInteger<uint64_t>() > last_pd_pool_id)) {
                last_pd_pool_id = out_bindings[20]->getInteger<uint64_t>();
                last_pd_pool = Pool6::create(Lease::TYPE_PD,
                                             IOAddress(out_bindings[21]->getString()),
                                             out_bindings[22]->getInteger<uint8_t>(),
                                             out_bindings[23]->getInteger<uint8_t>());
                last_subnet->addPool(last_pd_pool);
            }

            // Parse pool specific option between 26 and 38
            if (last_pool && !out_bindings[26]->amNull() &&
                (last_pool_option_id < out_bindings[26]->getInteger<uint64_t>())) {
                last_pool_option_id = out_bindings[26]->getInteger<uint64_t>();

                OptionDescriptorPtr desc = processOptionRow(Option::V6, out_bindings.begin() + 26);
                if (desc) {
                    last_pool->getCfgOption()->add(*desc, desc->space_name_);
                }
            }

            // Parse pd pool specific option between 39 and 51
            if (last_pd_pool && !out_bindings[39]->amNull() &&
                (last_pd_pool_option_id < out_bindings[39]->getInteger<uint64_t>())) {
                last_pd_pool_option_id = out_bindings[39]->getInteger<uint64_t>();

                OptionDescriptorPtr desc = processOptionRow(Option::V6, out_bindings.begin() + 39);
                if (desc) {
                    last_pd_pool->getCfgOption()->add(*desc, desc->space_name_);
                }
            }

            // Parse subnet specific option between 52 and 64
            if (!out_bindings[52]->amNull() &&
                (last_option_id < out_bindings[52]->getInteger<uint64_t>())) {
                last_option_id = out_bindings[52]->getInteger<uint64_t>();

                OptionDescriptorPtr desc = processOptionRow(Option::V6, out_bindings.begin() + 52);
                if (desc) {
                    last_subnet->getCfgOption()->add(*desc, desc->space_name_);
                }
            }

        });
    }

    /// @brief Sends query to retrieve single subnet by id.
    ///
    /// @param server_selector Server selector.
    /// @param subnet_id Subnet identifier.
    ///
    /// @return Pointer to the returned subnet or NULL if such subnet
    /// doesn't exist.
    Subnet6Ptr getSubnet6(const ServerSelector& server_selector,
                          const SubnetID& subnet_id) {
        Subnet6Collection subnets;

        auto tags = getServerTags(server_selector);
        for (auto tag : tags) {
            MySqlBindingCollection in_bindings = {
                MySqlBinding::createString(tag),
                MySqlBinding::createInteger<uint32_t>(subnet_id)
            };

            getSubnets6(GET_SUBNET6_ID, in_bindings, subnets);
        }

        return (subnets.empty() ? Subnet6Ptr() : *subnets.begin());
    }

    /// @brief Sends query to retrieve single subnet by prefix.
    ///
    /// The prefix should be in the following format: "2001:db8:1::/64".
    ///
    /// @param server_selector Server selector.
    /// @param subnet_id Subnet identifier.
    ///
    /// @return Pointer to the returned subnet or NULL if such subnet
    /// doesn't exist.
    Subnet6Ptr getSubnet6(const ServerSelector& server_selector,
                          const std::string& subnet_prefix) {
        Subnet6Collection subnets;

        auto tags = getServerTags(server_selector);
        for (auto tag : tags) {
            MySqlBindingCollection in_bindings = {
                MySqlBinding::createString(tag),
                MySqlBinding::createString(subnet_prefix)
            };

            getSubnets6(GET_SUBNET6_PREFIX, in_bindings, subnets);
        }

        return (subnets.empty() ? Subnet6Ptr() : *subnets.begin());
    }

    /// @brief Sends query to retrieve all subnets.
    ///
    /// @param server_selector Server selector.
    /// @param [out] subnets Reference to the subnet collection structure where
    /// subnets should be inserted.
    void getAllSubnets6(const ServerSelector& server_selector,
                        Subnet6Collection& subnets) {
        auto tags = getServerTags(server_selector);

        for (auto tag : tags) {
            MySqlBindingCollection in_bindings = {
                MySqlBinding::createString(tag)
            };

            getSubnets6(GET_ALL_SUBNETS6, in_bindings, subnets);
        }
    }

    /// @brief Sends query to retrieve modified subnets.
    ///
    /// @param server_selector Server selector.
    /// @param modification_ts Lower bound modification timestamp.
    /// @param [out] subnets Reference to the subnet collection structure where
    /// subnets should be inserted.
    void getModifiedSubnets6(const ServerSelector& server_selector,
                             const boost::posix_time::ptime& modification_ts,
                             Subnet6Collection& subnets) {
        auto tags = getServerTags(server_selector);

        for (auto tag : tags) {
            MySqlBindingCollection in_bindings = {
                MySqlBinding::createString(tag),
                MySqlBinding::createTimestamp(modification_ts)
            };

            getSubnets6(GET_MODIFIED_SUBNETS6, in_bindings, subnets);
        }
    }

    /// @brief Sends query to retrieve all subnets belonging to a shared network.
    ///
    /// @param server_selector Server selector.
    /// @param shared_network_name Name of the shared network for which the
    /// subnets should be retrieved.
    /// @param [out] subnets Reference to the subnet collection structure where
    /// subnets should be inserted.
    void getSharedNetworkSubnets6(const ServerSelector& server_selector,
                                  const std::string& shared_network_name,
                                  Subnet6Collection& subnets) {
        auto tags = getServerTags(server_selector);

        for (auto tag : tags) {
            MySqlBindingCollection in_bindings = {
                MySqlBinding::createString(tag),
                MySqlBinding::createString(shared_network_name)
            };

            getSubnets6(GET_SHARED_NETWORK_SUBNETS6, in_bindings, subnets);
        }
    }

    /// @brief Sends query to retrieve multiple pools.
    ///
    /// Query should order pools by id.
    ///
    /// @param index Index of the query to be used.
    /// @param in_bindings Input bindings specifying selection criteria. The
    /// size of the bindings collection must match the number of placeholders
    /// in the prepared statement. The input bindings collection must be empty
    /// if the query contains no WHERE clause.
    /// @param [out] pools Reference to the container where fetched pools
    /// will be inserted.
    /// @param [out] pool_ids Identifiers of the pools returned in @c pools
    /// argument.
    void getPools(const StatementIndex& index,
                  const MySqlBindingCollection& in_bindings,
                  PoolCollection& pools,
                  std::vector<uint64_t>& pool_ids) {
        MySqlBindingCollection out_bindings = {
            MySqlBinding::createInteger<uint64_t>(), // pool: id
            MySqlBinding::createString(POOL_ADDRESS6_BUF_LENGTH), // pool: start_address
            MySqlBinding::createString(POOL_ADDRESS6_BUF_LENGTH), // pool: end_address
            MySqlBinding::createInteger<uint32_t>(), // pool: subnet_id
            MySqlBinding::createTimestamp(), // pool: modification_ts
            MySqlBinding::createInteger<uint64_t>(), // pool option: option_id
            MySqlBinding::createInteger<uint16_t>(), // pool option: code
            MySqlBinding::createBlob(OPTION_VALUE_BUF_LENGTH), // pool option: value
            MySqlBinding::createString(FORMATTED_OPTION_VALUE_BUF_LENGTH), // pool option: formatted_value
            MySqlBinding::createString(OPTION_SPACE_BUF_LENGTH), // pool option: space
            MySqlBinding::createInteger<uint8_t>(), // pool option: persistent
            MySqlBinding::createInteger<uint32_t>(), // pool option: dhcp6_subnet_id
            MySqlBinding::createInteger<uint8_t>(), // pool option: scope_id
            MySqlBinding::createString(USER_CONTEXT_BUF_LENGTH), // pool option: user_context
            MySqlBinding::createString(SHARED_NETWORK_NAME_BUF_LENGTH), // pool option: shared_network_name
            MySqlBinding::createInteger<uint64_t>(), // pool option: pool_id
            MySqlBinding::createTimestamp(), //pool option: modification_ts
            MySqlBinding::createInteger<uint64_t>(), // pool option: pd_pool_id
        };

        uint64_t last_pool_id = 0;
        uint64_t last_pool_option_id = 0;
        Pool6Ptr last_pool;

        conn_.selectQuery(index, in_bindings, out_bindings,
                          [this, &last_pool_id, &last_pool_option_id, &last_pool,
                           &pools, &pool_ids]
                          (MySqlBindingCollection& out_bindings) {
            if (out_bindings[0]->getInteger<uint64_t>() > last_pool_id) {

                last_pool_id = out_bindings[0]->getInteger<uint64_t>();

                last_pool = Pool6::create(Lease::TYPE_NA,
                                          IOAddress(out_bindings[1]->getString()),
                                          IOAddress(out_bindings[2]->getString()));
                pools.push_back(last_pool);
                pool_ids.push_back(last_pool_id);
            }

            // Parse pool specific option.
            if (last_pool && !out_bindings[5]->amNull() &&
                (last_pool_option_id < out_bindings[5]->getInteger<uint64_t>())) {
                last_pool_option_id = out_bindings[5]->getInteger<uint64_t>();

                OptionDescriptorPtr desc = processOptionRow(Option::V6, out_bindings.begin() + 5);
                if (desc) {
                    last_pool->getCfgOption()->add(*desc, desc->space_name_);
                }
            }
        });
    }

    /// @brief Sends query to retrieve multiple pd pools.
    ///
    /// Query should order pd pools by id.
    ///
    /// @param index Index of the query to be used.
    /// @param in_bindings Input bindings specifying selection criteria. The
    /// size of the bindings collection must match the number of placeholders
    /// in the prepared statement. The input bindings collection must be empty
    /// if the query contains no WHERE clause.
    /// @param [out] pd_pools Reference to the container where fetched pools
    /// will be inserted.
    /// @param [out] pd_pool_ids Identifiers of the pd pools returned in
    /// @c pd_pools argument.
    void getPdPools(const StatementIndex& index,
                    const MySqlBindingCollection& in_bindings,
                    PoolCollection& pd_pools,
                    std::vector<uint64_t>& pd_pool_ids) {
        MySqlBindingCollection out_bindings = {
            MySqlBinding::createInteger<uint64_t>(), // pd pool: id
            MySqlBinding::createString(POOL_ADDRESS6_BUF_LENGTH), // pd pool: prefix
            MySqlBinding::createInteger<uint8_t>(), // pd pool: prefix_length
            MySqlBinding::createInteger<uint8_t>(), // pd pool: delegated_prefix_length
            MySqlBinding::createInteger<uint32_t>(), // pd pool: subnet_id
            MySqlBinding::createTimestamp(), // pd pool: modification_ts
            MySqlBinding::createInteger<uint64_t>(), // pd pool option: option_id
            MySqlBinding::createInteger<uint16_t>(), // pd pool option: code
            MySqlBinding::createBlob(OPTION_VALUE_BUF_LENGTH), // pd pool option: value
            MySqlBinding::createString(FORMATTED_OPTION_VALUE_BUF_LENGTH), // pd pool option: formatted_value
            MySqlBinding::createString(OPTION_SPACE_BUF_LENGTH), // pd pool option: space
            MySqlBinding::createInteger<uint8_t>(), // pd pool option: persistent
            MySqlBinding::createInteger<uint32_t>(), // pd pool option: dhcp6_subnet_id
            MySqlBinding::createInteger<uint8_t>(), // pd pool option: scope_id
            MySqlBinding::createString(USER_CONTEXT_BUF_LENGTH), // pd pool option: user_context
            MySqlBinding::createString(SHARED_NETWORK_NAME_BUF_LENGTH), // pd pool option: shared_network_name
            MySqlBinding::createInteger<uint64_t>(), // pd pool option: pool_id
            MySqlBinding::createTimestamp(), // pd pool option: modification_ts
            MySqlBinding::createInteger<uint64_t>() // pd pool option: pd_pool_id
        };

        uint64_t last_pd_pool_id = 0;
        uint64_t last_pd_pool_option_id = 0;
        Pool6Ptr last_pd_pool;

        conn_.selectQuery(index, in_bindings, out_bindings,
                          [this, &last_pd_pool_id, &last_pd_pool_option_id,
                           &last_pd_pool, &pd_pools, &pd_pool_ids]
                          (MySqlBindingCollection& out_bindings) {
            if (out_bindings[0]->getInteger<uint64_t>() > last_pd_pool_id) {

                last_pd_pool_id = out_bindings[0]->getInteger<uint64_t>();

                last_pd_pool = Pool6::create(Lease::TYPE_PD,
                                             IOAddress(out_bindings[1]->getString()),
                                             out_bindings[2]->getInteger<uint8_t>(),
                                             out_bindings[3]->getInteger<uint8_t>());
                pd_pools.push_back(last_pd_pool);
                pd_pool_ids.push_back(last_pd_pool_id);
            }

            // Parse pool specific option between 6 and 19
            if (last_pd_pool && !out_bindings[6]->amNull() &&
                (last_pd_pool_option_id < out_bindings[6]->getInteger<uint64_t>())) {
                last_pd_pool_option_id = out_bindings[6]->getInteger<uint64_t>();

                OptionDescriptorPtr desc = processOptionRow(Option::V6, out_bindings.begin() + 6);
                if (desc) {
                    last_pd_pool->getCfgOption()->add(*desc, desc->space_name_);
                }
            }
        });
    }

    /// @brief Sends query to retrieve single pool by address range.
    ///
    /// @param server_selector Server selector.
    /// @param pool_start_address Lower bound pool address.
    /// @param pool_end_address Upper bound pool address.
    /// @param pool_id Pool identifier for the returned pool.
    /// @return Pointer to the pool or null if no such pool found.
    Pool6Ptr getPool6(const ServerSelector& /* server_selector */,
                      const IOAddress& pool_start_address,
                      const IOAddress& pool_end_address,
                      uint64_t& pool_id) {
        MySqlBindingCollection in_bindings = {
            MySqlBinding::createString(pool_start_address.toText()),
            MySqlBinding::createString(pool_end_address.toText())
        };

        PoolCollection pools;
        std::vector<uint64_t> pool_ids;
        getPools(GET_POOL6_RANGE, in_bindings, pools, pool_ids);

        if (!pools.empty()) {
            pool_id = pool_ids[0];
            return (boost::dynamic_pointer_cast<Pool6>(*pools.begin()));
        }

        pool_id = 0;

        return (Pool6Ptr());
    }

    /// @brief Sends query to retrieve single pd pool.
    ///
    /// @param server_selector Server selector.
    /// @param pd_pool_prefix Address part of the pd pool prefix.
    /// @param pd_pool_prefix_length Length of the pd pool prefix.
    /// @param pd_pool_id Pool identifier for the returned pool.
    /// @return Pointer to the pool or null if no such pool found.
    Pool6Ptr getPdPool6(const ServerSelector& /* server_selector */,
                        const asiolink::IOAddress& pd_pool_prefix,
                        const uint8_t pd_pool_prefix_length,
                        uint64_t& pd_pool_id) {
        MySqlBindingCollection in_bindings = {
            MySqlBinding::createString(pd_pool_prefix.toText()),
            MySqlBinding::createInteger<uint8_t>(pd_pool_prefix_length)
        };

        PoolCollection pd_pools;
        std::vector<uint64_t> pd_pool_ids;
        getPdPools(GET_PD_POOL, in_bindings, pd_pools, pd_pool_ids);

        if (!pd_pools.empty()) {
            pd_pool_id = pd_pool_ids[0];
            return (boost::dynamic_pointer_cast<Pool6>(*pd_pools.begin()));
        }

        pd_pool_id = 0;

        return (Pool6Ptr());
    }

    /// @brief Sends query to insert or update subnet.
    ///
    /// @param server_selector Server selector.
    /// @param subnet Pointer to the subnet to be inserted or updated.
    void createUpdateSubnet6(const ServerSelector& server_selector,
                             const Subnet6Ptr& subnet) {

        if (server_selector.amUnassigned()) {
            isc_throw(NotImplemented, "managing configuration for no particular server"
                      " (unassigned) is unsupported at the moment");
        }

        auto tag = getServerTag(server_selector, "creating or updating subnet");

        // Create JSON list of required classes.
        ElementPtr required_classes_element = Element::createList();
        const auto& required_classes = subnet->getRequiredClasses();
        for (auto required_class = required_classes.cbegin();
             required_class != required_classes.cend();
             ++required_class) {
            required_classes_element->add(Element::create(*required_class));
        }

        // Create binding for host reservation mode.
        MySqlBindingPtr hr_mode_binding;
        auto hr_mode = subnet->getHostReservationMode(Network::Inheritance::NONE);
        if (!hr_mode.unspecified()) {
            hr_mode_binding = MySqlBinding::createInteger<uint8_t>(static_cast<uint8_t>
                                                                   (hr_mode.get()));
        } else {
            hr_mode_binding = MySqlBinding::createNull();
        }

        // Create binding with shared network name if the subnet belongs to a
        // shared network.
        MySqlBindingPtr shared_network_binding;

        SharedNetwork6Ptr shared_network;
        subnet->getSharedNetwork(shared_network);

        // Check if the subnet is associated with a shared network instance.
        // If it is, create the binding using the name of the shared network.
        if (shared_network) {
            shared_network_binding = MySqlBinding::createString(shared_network->getName());

        // If the subnet is associated with a shared network by name (no
        // shared network instance), use this name to create the binding.
        // This may be the case if the subnet is added as a result of
        // receiving a control command that merely specifies shared
        // network name. In that case, it is expected that the shared
        // network data is already stored in the database.
        } else if (!subnet->getSharedNetworkName().empty()) {
            shared_network_binding = MySqlBinding::createString(subnet->getSharedNetworkName());

        // If the subnet is not associated with a shared network, create
        // null binding.
        } else {
             shared_network_binding = MySqlBinding::createNull();
        }

        // Create input bindings.
        MySqlBindingCollection in_bindings = {
            MySqlBinding::createInteger<uint32_t>(subnet->getID()),
            MySqlBinding::createString(subnet->toText()),
            MySqlBinding::condCreateString(subnet->getClientClass(Network::Inheritance::NONE)),
            MySqlBinding::condCreateString(subnet->getIface(Network::Inheritance::NONE)),
            MySqlBinding::createTimestamp(subnet->getModificationTime()),
            createBinding(subnet->getPreferred(Network::Inheritance::NONE)),
            MySqlBinding::condCreateBool(subnet->getRapidCommit(Network::Inheritance::NONE)),
            createBinding(subnet->getT2(Network::Inheritance::NONE)),
            createInputRelayBinding(subnet),
            createBinding(subnet->getT1(Network::Inheritance::NONE)),
            createInputRequiredClassesBinding(subnet),
            hr_mode_binding,
            shared_network_binding,
            createInputContextBinding(subnet),
            createBinding(subnet->getValid(Network::Inheritance::NONE)),
            MySqlBinding::condCreateBool(subnet->getCalculateTeeTimes(Network::Inheritance::NONE)),
            MySqlBinding::condCreateFloat(subnet->getT1Percent(Network::Inheritance::NONE)),
            MySqlBinding::condCreateFloat(subnet->getT2Percent(Network::Inheritance::NONE))
        };

        MySqlTransaction transaction(conn_);

        // Create scoped audit revision. As long as this instance exists
        // no new audit revisions are created in any subsequent calls.
        ScopedAuditRevision audit_revision(this,
                                           MySqlConfigBackendDHCPv6Impl::CREATE_AUDIT_REVISION,
                                           server_selector, "subnet set", true);

        try {

            // Try to insert subnet. If this duplicates unique key, i.e. this
            // subnet already exists it will throw DuplicateEntry exception in
            // which case we'll try an update.
            conn_.insertQuery(MySqlConfigBackendDHCPv6Impl::INSERT_SUBNET6,
                              in_bindings);

            // Create bindings for inserting the association into
            // dhcp6_subnet_server table.
            MySqlBindingCollection in_server_bindings = {
                MySqlBinding::createInteger<uint32_t>(subnet->getID()), // subnet_id
                MySqlBinding::createString(tag), // tag used to obtain server_id
                MySqlBinding::createTimestamp(subnet->getModificationTime()), // modification_ts
            };

            // Insert association.
            conn_.insertQuery(MySqlConfigBackendDHCPv6Impl::INSERT_SUBNET6_SERVER,
                              in_server_bindings);


        } catch (const DuplicateEntry&) {
            deletePools6(subnet);
            deletePdPools6(subnet);
            deleteOptions6(server_selector, subnet);

            // Need to add two more bindings for WHERE clause.
            in_bindings.push_back(MySqlBinding::createInteger<uint32_t>(subnet->getID()));
            in_bindings.push_back(MySqlBinding::createString(subnet->toText()));
            conn_.updateDeleteQuery(MySqlConfigBackendDHCPv6Impl::UPDATE_SUBNET6,
                                    in_bindings);
        }

        // (Re)create pools.
        for (auto pool : subnet->getPools(Lease::TYPE_NA)) {
            createPool6(server_selector, boost::dynamic_pointer_cast<Pool6>(pool),
                        subnet);
        }

        // (Re)create pd pools.
        for (auto pd_pool : subnet->getPools(Lease::TYPE_PD)) {
            createPdPool6(server_selector, boost::dynamic_pointer_cast<Pool6>(pd_pool),
                          subnet);
        }

        // (Re)create options.
        auto option_spaces = subnet->getCfgOption()->getOptionSpaceNames();
        for (auto option_space : option_spaces) {
            OptionContainerPtr options = subnet->getCfgOption()->getAll(option_space);
            for (auto desc = options->begin(); desc != options->end(); ++desc) {
                OptionDescriptorPtr desc_copy = OptionDescriptor::create(*desc);
                desc_copy->space_name_ = option_space;
                createUpdateOption6(server_selector, subnet->getID(), desc_copy,
                                    true);
            }
        }

        transaction.commit();
    }

    /// @brief Inserts new IPv6 pool to the database.
    ///
    /// @param server_selector Server selector.
    /// @param pool Pointer to the pool to be inserted.
    /// @param subnet Pointer to the subnet that this pool belongs to.
    void createPool6(const ServerSelector& server_selector, const Pool6Ptr& pool,
                     const Subnet6Ptr& subnet) {
        MySqlBindingCollection in_bindings = {
            MySqlBinding::createString(pool->getFirstAddress().toText()),
            MySqlBinding::createString(pool->getLastAddress().toText()),
            MySqlBinding::createInteger<uint32_t>(static_cast<uint32_t>(subnet->getID())),
            MySqlBinding::createTimestamp(subnet->getModificationTime())
        };

        // Run INSERT.
        conn_.insertQuery(INSERT_POOL6, in_bindings);

        uint64_t pool_id = mysql_insert_id(conn_.mysql_);
        auto option_spaces = pool->getCfgOption()->getOptionSpaceNames();
        for (auto option_space : option_spaces) {
            OptionContainerPtr options = pool->getCfgOption()->getAll(option_space);
            for (auto desc = options->begin(); desc != options->end(); ++desc) {
                OptionDescriptorPtr desc_copy = OptionDescriptor::create(*desc);
                desc_copy->space_name_ = option_space;
                createUpdateOption6(server_selector, Lease::TYPE_NA,
                                    pool_id, desc_copy, true);
            }
        }
    }

    /// @brief Inserts new IPv6 pd pool to the database.
    ///
    /// @param server_selector Server selector.
    /// @param pd_pool Pointer to the pd pool to be inserted.
    /// @param subnet Pointer to the subnet that this pd pool belongs to.
    void createPdPool6(const ServerSelector& server_selector,
                       const Pool6Ptr& pd_pool,
                       const Subnet6Ptr& subnet) {
        int plen = prefixLengthFromRange(pd_pool->getFirstAddress(),
                                         pd_pool->getLastAddress());
        MySqlBindingCollection in_bindings = {
            MySqlBinding::createString(pd_pool->getFirstAddress().toText()),
            MySqlBinding::createInteger<uint8_t>(static_cast<uint8_t>(plen)),
            MySqlBinding::createInteger<uint8_t>(pd_pool->getLength()),
            MySqlBinding::createInteger<uint32_t>(static_cast<uint32_t>(subnet->getID())),
            MySqlBinding::createTimestamp(subnet->getModificationTime())
        };

        // Run INSERT.
        conn_.insertQuery(INSERT_PD_POOL, in_bindings);

        uint64_t pd_pool_id = mysql_insert_id(conn_.mysql_);
        auto option_spaces = pd_pool->getCfgOption()->getOptionSpaceNames();
        for (auto option_space : option_spaces) {
            OptionContainerPtr options = pd_pool->getCfgOption()->getAll(option_space);
            for (auto desc = options->begin(); desc != options->end(); ++desc) {
                OptionDescriptorPtr desc_copy = OptionDescriptor::create(*desc);
                desc_copy->space_name_ = option_space;
                createUpdateOption6(server_selector, Lease::TYPE_PD,
                                    pd_pool_id, desc_copy, true);
            }
        }
    }

    /// @brief Sends a query to delete data from a table.
    ///
    /// If creates a new audit revision for this change if such audit
    /// revision doesn't exist yet (using ScopedAuditRevision mechanism).
    ///
    /// @tparam Args type of the arguments to be passed to one of the existing
    /// @c deleteFromTable methods.
    /// @param server_selector server selector.
    /// @param operation operation which results in calling this function. This is
    /// used for logging purposes.
    /// @param log_message log message to be associated with the audit revision.
    /// @param cascade_delete boolean flag indicating if we're performing
    /// cascade delete. If set to true, the audit entries for the child
    /// objects (e.g. DHCPoptions) won't be created.
    /// @param keys arguments to be passed to one of the existing
    /// @c deleteFromTable methods.
    ///
    /// @return Number of deleted entries.
    template<typename... Args>
    uint64_t deleteTransactional(const int index,
                                 const db::ServerSelector& server_selector,
                                 const std::string& operation,
                                 const std::string& log_message,
                                 const bool cascade_delete,
                                 Args&&... keys) {

        MySqlTransaction transaction(conn_);

        // Create scoped audit revision. As long as this instance exists
        // no new audit revisions are created in any subsequent calls.
        ScopedAuditRevision
            audit_revision(this,
                           MySqlConfigBackendDHCPv6Impl::CREATE_AUDIT_REVISION,
                           server_selector, log_message, cascade_delete);

        auto count = deleteFromTable(index, server_selector, operation, keys...);

        transaction.commit();

        return (count);
    }

    /// @brief Sends query to delete subnet by id.
    ///
    /// @param server_selector Server selector.
    /// @param subnet_id Identifier of the subnet to be deleted.
    /// @return Number of deleted subnets.
    uint64_t deleteSubnet6(const ServerSelector& server_selector,
                           const SubnetID& subnet_id) {
        return (deleteTransactional(DELETE_SUBNET6_ID, server_selector,
                                    "deleting a subnet",
                                    "subnet deleted",
                                    true,
                                    static_cast<uint32_t>(subnet_id)));
    }

    /// @brief Deletes pools belonging to a subnet from the database.
    ///
    /// @param subnet Pointer to the subnet for which pools should be
    /// deleted.
    uint64_t deletePools6(const Subnet6Ptr& subnet) {
        MySqlBindingCollection in_bindings = {
            MySqlBinding::createInteger<uint32_t>(subnet->getID())
        };

        // Run DELETE.
        return (conn_.updateDeleteQuery(DELETE_POOLS6_SUBNET_ID, in_bindings));
    }

    /// @brief Deletes pd pools belonging to a subnet from the database.
    ///
    /// @param subnet Pointer to the subnet for which pd pools should be
    /// deleted.
    uint64_t deletePdPools6(const Subnet6Ptr& subnet) {
        MySqlBindingCollection in_bindings = {
            MySqlBinding::createInteger<uint32_t>(subnet->getID())
        };

        // Run DELETE.
        return (conn_.updateDeleteQuery(DELETE_PD_POOLS_SUBNET_ID, in_bindings));
    }

    /// @brief Sends query to the database to retrieve multiple shared
    /// networks.
    ///
    /// Query should order shared networks by id.
    ///
    /// @param index Index of the query to be used.
    /// @param in_bindings Input bindings specifying selection criteria. The
    /// size of the bindings collection must match the number of placeholders
    /// in the prepared statement. The input bindings collection must be empty
    /// if the query contains no WHERE clause.
    /// @param [out] shared_networks Reference to the container where fetched
    /// shared networks will be inserted.
    void getSharedNetworks6(const StatementIndex& index,
                            const MySqlBindingCollection& in_bindings,
                            SharedNetwork6Collection& shared_networks) {
        // Create output bindings. The order must match that in the prepared
        // statement.
        MySqlBindingCollection out_bindings = {
            MySqlBinding::createInteger<uint64_t>(), // id
            MySqlBinding::createString(SHARED_NETWORK_NAME_BUF_LENGTH), // name
            MySqlBinding::createString(CLIENT_CLASS_BUF_LENGTH), // client_class
            MySqlBinding::createString(INTERFACE_BUF_LENGTH), // interface
            MySqlBinding::createTimestamp(), // modification_ts
            MySqlBinding::createInteger<uint32_t>(), // preferred_lifetime
            MySqlBinding::createInteger<uint8_t>(), // rapid_commit
            MySqlBinding::createInteger<uint32_t>(), // rebind_timer
            MySqlBinding::createString(RELAY_BUF_LENGTH), // relay
            MySqlBinding::createInteger<uint32_t>(), // renew_timer
            MySqlBinding::createString(REQUIRE_CLIENT_CLASSES_BUF_LENGTH), // require_client_classes
            MySqlBinding::createInteger<uint8_t>(), // reservation_mode
            MySqlBinding::createString(USER_CONTEXT_BUF_LENGTH), // user_context
            MySqlBinding::createInteger<uint32_t>(), // valid_lifetime
            MySqlBinding::createInteger<uint64_t>(), // option: option_id
            MySqlBinding::createInteger<uint16_t>(), // option: code
            MySqlBinding::createBlob(OPTION_VALUE_BUF_LENGTH), // option: value
            MySqlBinding::createString(FORMATTED_OPTION_VALUE_BUF_LENGTH), // option: formatted_value
            MySqlBinding::createString(OPTION_SPACE_BUF_LENGTH), // option: space
            MySqlBinding::createInteger<uint8_t>(), // option: persistent
            MySqlBinding::createInteger<uint32_t>(), // option: dhcp6_subnet_id
            MySqlBinding::createInteger<uint8_t>(), // option: scope_id
            MySqlBinding::createString(USER_CONTEXT_BUF_LENGTH), // option: user_context
            MySqlBinding::createString(SHARED_NETWORK_NAME_BUF_LENGTH), // option: shared_network_name
            MySqlBinding::createInteger<uint64_t>(), // option: pool_id
            MySqlBinding::createTimestamp(), // option: modification_ts
            MySqlBinding::createInteger<uint64_t>(), // option: pd_pool_id
            MySqlBinding::createInteger<uint8_t>(), // calculate_tee_times
            MySqlBinding::createInteger<float>(), // t1_percent
            MySqlBinding::createInteger<float>(), // t2_percent
            MySqlBinding::createString(SERVER_TAG_BUF_LENGTH) // server_tag
        };

        uint64_t last_network_id = 0;
        uint64_t last_option_id = 0;

        conn_.selectQuery(index, in_bindings, out_bindings,
                          [this, &shared_networks, &last_network_id, &last_option_id]
                          (MySqlBindingCollection& out_bindings) {
            SharedNetwork6Ptr last_network;
            if (!shared_networks.empty()) {
                last_network = *shared_networks.rbegin();
            }

            // If this is the first shared network or the shared network id in this
            // row points to the next shared network we use the data in the
            // row to create the new shared network instance.
            if (last_network_id != out_bindings[0]->getInteger<uint64_t>()) {

                last_network_id = out_bindings[0]->getInteger<uint64_t>();
                last_network = SharedNetwork6::create(out_bindings[1]->getString());
                last_network->setId(last_network_id);

                // client_class
                if (!out_bindings[2]->amNull()) {
                    last_network->allowClientClass(out_bindings[2]->getString());
                }

                // interface
                if (!out_bindings[3]->amNull()) {
                    last_network->setIface(out_bindings[3]->getString());
                }

                // modification_ts
                last_network->setModificationTime(out_bindings[4]->getTimestamp());

                // preferred_lifetime
                if (!out_bindings[5]->amNull()) {
                    last_network->setPreferred(createTriplet(out_bindings[5]));
                }

                // rapid_commit
                if (!out_bindings[6]->amNull()) {
                    last_network->setRapidCommit(out_bindings[6]->getBool());
                }

                // rebind_timer
                if (!out_bindings[7]->amNull()) {
                    last_network->setT2(createTriplet(out_bindings[7]));
                }

                // relay
                ElementPtr relay_element = out_bindings[8]->getJSON();
                if (relay_element) {
                    if (relay_element->getType() != Element::list) {
                        isc_throw(BadValue, "invalid relay value "
                                  << out_bindings[8]->getString());
                    }
                    for (auto i = 0; i < relay_element->size(); ++i) {
                        auto relay_address_element = relay_element->get(i);
                        if (relay_address_element->getType() != Element::string) {
                            isc_throw(BadValue, "relay address must be a string");
                        }
                        last_network->addRelayAddress(IOAddress(relay_element->get(i)->stringValue()));
                    }
                }

                // renew_timer
                if (!out_bindings[9]->amNull()) {
                    last_network->setT1(createTriplet(out_bindings[9]));
                }

                // require_client_classes
                ElementPtr require_element = out_bindings[10]->getJSON();
                if (require_element) {
                    if (require_element->getType() != Element::list) {
                        isc_throw(BadValue, "invalid require_client_classes value "
                              << out_bindings[10]->getString());
                    }
                    for (auto i = 0; i < require_element->size(); ++i) {
                        auto require_item = require_element->get(i);
                        if (require_item->getType() != Element::string) {
                            isc_throw(BadValue, "elements of require_client_classes list must"
                                      "be valid strings");
                        }
                        last_network->requireClientClass(require_item->stringValue());
                    }
                }

                // reservation_mode
                if (!out_bindings[11]->amNull()) {
                    last_network->setHostReservationMode(static_cast<Subnet4::HRMode>
                        (out_bindings[11]->getIntegerOrDefault<uint8_t>(Subnet4::HR_ALL)));
                }

                // user_context
                ElementPtr user_context = out_bindings[12]->getJSON();
                if (user_context) {
                    last_network->setContext(user_context);
                }

                // valid_lifetime
                if (!out_bindings[13]->amNull()) {
                    last_network->setValid(createTriplet(out_bindings[13]));
                }

                // calculate_tee_times
                if (!out_bindings[27]->amNull()) {
                    last_network->setCalculateTeeTimes(out_bindings[27]->getBool());
                }

                // t1_percent
                if (!out_bindings[28]->amNull()) {
                    last_network->setT1Percent(out_bindings[28]->getFloat());
                }

                // t2_percent
                if (!out_bindings[29]->amNull()) {
                    last_network->setT2Percent(out_bindings[29]->getFloat());
                }

                // server_tag
                last_network->setServerTag(out_bindings[30]->getString());

                shared_networks.push_back(last_network);
            }

            // Parse option from 14 to 26.
            if (!out_bindings[14]->amNull() &&
                (last_option_id < out_bindings[14]->getInteger<uint64_t>())) {
                last_option_id = out_bindings[14]->getInteger<uint64_t>();

                OptionDescriptorPtr desc = processOptionRow(Option::V6, out_bindings.begin() + 14);
                if (desc) {
                    last_network->getCfgOption()->add(*desc, desc->space_name_);
                }
            }
        });
    }

    /// @brief Sends query to retrieve single shared network by name.
    ///
    /// @param server_selector Server selector.
    /// @param name Shared network name.
    ///
    /// @return Pointer to the returned shared network or NULL if such shared
    /// network doesn't exist.
    SharedNetwork6Ptr getSharedNetwork6(const ServerSelector& server_selector,
                                        const std::string& name) {

        if (server_selector.amUnassigned()) {
            isc_throw(NotImplemented, "managing configuration for no particular server"
                      " (unassigned) is unsupported at the moment");
        }

        auto tag = getServerTag(server_selector, "fetching shared network");

        MySqlBindingCollection in_bindings = {
            MySqlBinding::createString(tag),
            MySqlBinding::createString(name)
        };

        SharedNetwork6Collection shared_networks;
        getSharedNetworks6(GET_SHARED_NETWORK6_NAME, in_bindings, shared_networks);

        return (shared_networks.empty() ? SharedNetwork6Ptr() : *shared_networks.begin());
    }

    /// @brief Sends query to retrieve all shared networks.
    ///
    /// @param server_selector Server selector.
    /// @param [out] shared_networks Reference to the shared networks collection
    /// structure where shared networks should be inserted.
    void getAllSharedNetworks6(const ServerSelector& server_selector,
                               SharedNetwork6Collection& shared_networks) {
        auto tags = getServerTags(server_selector);

        for (auto tag : tags) {
            MySqlBindingCollection in_bindings = {
                MySqlBinding::createString(tag)
            };

            getSharedNetworks6(GET_ALL_SHARED_NETWORKS6, in_bindings, shared_networks);
        }
    }

    /// @brief Sends query to retrieve modified shared networks.
    ///
    /// @param server_selector Server selector.
    /// @param modification_ts Lower bound modification timestamp.
    /// @param [out] shared_networks Reference to the shared networks collection
    /// structure where shared networks should be inserted.
    void getModifiedSharedNetworks6(const ServerSelector& server_selector,
                                    const boost::posix_time::ptime& modification_ts,
                                    SharedNetwork6Collection& shared_networks) {
        auto tags = getServerTags(server_selector);

        for (auto tag : tags) {
            MySqlBindingCollection in_bindings = {
                MySqlBinding::createString(tag),
                MySqlBinding::createTimestamp(modification_ts)
            };

            getSharedNetworks6(GET_MODIFIED_SHARED_NETWORKS6, in_bindings,
                               shared_networks);
        }
    }

    /// @brief Sends query to insert or update shared network.
    ///
    /// @param server_selector Server selector.
    /// @param subnet Pointer to the shared network to be inserted or updated.
    void createUpdateSharedNetwork6(const ServerSelector& server_selector,
                                    const SharedNetwork6Ptr& shared_network) {

        if (server_selector.amUnassigned()) {
            isc_throw(NotImplemented, "managing configuration for no particular server"
                      " (unassigned) is unsupported at the moment");
        }

        auto tag = getServerTag(server_selector, "creating or updating shared network");

        // Create binding for host reservation mode.
        MySqlBindingPtr hr_mode_binding;
        auto hr_mode = shared_network->getHostReservationMode(Network::Inheritance::NONE);
        if (!hr_mode.unspecified()) {
            hr_mode_binding = MySqlBinding::createInteger<uint8_t>(static_cast<uint8_t>
                                                                   (hr_mode.get()));
        } else {
            hr_mode_binding = MySqlBinding::createNull();
        }

        MySqlBindingCollection in_bindings = {
            MySqlBinding::createString(shared_network->getName()),
            MySqlBinding::condCreateString(shared_network->getClientClass(Network::Inheritance::NONE)),
            MySqlBinding::condCreateString(shared_network->getIface(Network::Inheritance::NONE)),
            MySqlBinding::createTimestamp(shared_network->getModificationTime()),
            createBinding(shared_network->getPreferred(Network::Inheritance::NONE)),
            MySqlBinding::condCreateBool(shared_network->getRapidCommit(Network::Inheritance::NONE)),
            createBinding(shared_network->getT2(Network::Inheritance::NONE)),
            createInputRelayBinding(shared_network),
            createBinding(shared_network->getT1(Network::Inheritance::NONE)),
            createInputRequiredClassesBinding(shared_network),
            hr_mode_binding,
            createInputContextBinding(shared_network),
            createBinding(shared_network->getValid(Network::Inheritance::NONE)),
            MySqlBinding::condCreateBool(shared_network->getCalculateTeeTimes(Network::Inheritance::NONE)),
            MySqlBinding::condCreateFloat(shared_network->getT1Percent(Network::Inheritance::NONE)),
            MySqlBinding::condCreateFloat(shared_network->getT2Percent(Network::Inheritance::NONE))
        };

        MySqlTransaction transaction(conn_);

        // Create scoped audit revision. As long as this instance exists
        // no new audit revisions are created in any subsequent calls.
        ScopedAuditRevision
            audit_revision(this,
                           MySqlConfigBackendDHCPv6Impl::CREATE_AUDIT_REVISION,
                           server_selector, "shared network set", true);

        try {

            // Try to insert shared network. The shared network name must be unique,
            // so if inserting fails with DuplicateEntry exception we'll need to
            // update existing shared network entry.
            conn_.insertQuery(MySqlConfigBackendDHCPv6Impl::INSERT_SHARED_NETWORK6,
                              in_bindings);

            // Create bindings for inserting association into dhcp6_shared_network_server
            // table.
            MySqlBindingCollection in_server_bindings = {
                MySqlBinding::createString(shared_network->getName()), // shared network name
                MySqlBinding::createString(tag), // server tag
                MySqlBinding::createTimestamp(shared_network->getModificationTime()), // modification_ts
            };

            // Insert association.
            conn_.insertQuery(MySqlConfigBackendDHCPv6Impl::INSERT_SHARED_NETWORK6_SERVER,
                              in_server_bindings);


        } catch (const DuplicateEntry&) {
            deleteOptions6(server_selector, shared_network);

            // Need to add one more binding for WHERE clause.
            in_bindings.push_back(MySqlBinding::createString(shared_network->getName()));
            conn_.updateDeleteQuery(MySqlConfigBackendDHCPv6Impl::UPDATE_SHARED_NETWORK6,
                                    in_bindings);
        }

        // (Re)create options.
        auto option_spaces = shared_network->getCfgOption()->getOptionSpaceNames();
        for (auto option_space : option_spaces) {
            OptionContainerPtr options = shared_network->getCfgOption()->getAll(option_space);
            for (auto desc = options->begin(); desc != options->end(); ++desc) {
                OptionDescriptorPtr desc_copy = OptionDescriptor::create(*desc);
                desc_copy->space_name_ = option_space;
                createUpdateOption6(server_selector, shared_network->getName(),
                                    desc_copy, true);
            }
        }

        transaction.commit();
    }


    /// @brief Sends query to insert DHCP option.
    ///
    /// This method expects that the server selector contains exactly one
    /// server tag.
    ///
    /// @param server_selector Server selector.
    /// @param in_bindings Collection of bindings representing an option.
    void insertOption6(const ServerSelector& server_selector,
                       const MySqlBindingCollection& in_bindings) {
        conn_.insertQuery(MySqlConfigBackendDHCPv6Impl::INSERT_OPTION6,
                          in_bindings);

        // Fetch unique identifier of the inserted option.
        uint64_t id = mysql_insert_id(conn_.mysql_);

        // Create bindings needed to insert association of that option with
        // a server into the dhcp6_options_server table.
        MySqlBindingCollection in_server_bindings = {
            MySqlBinding::createInteger<uint64_t>(id), // option_id
            MySqlBinding::createString(*getServerTags(server_selector).begin()), // server_tag
            in_bindings[11] // copy modification timestamp from option
        };

        conn_.insertQuery(MySqlConfigBackendDHCPv6Impl::INSERT_OPTION6_SERVER,
                          in_server_bindings);
    }

    /// @brief Sends query to insert or update global DHCP option.
    ///
    /// @param server_selector Server selector.
    /// @param option Pointer to the option descriptor encapsulating the option.
    void createUpdateOption6(const ServerSelector& server_selector,
                             const OptionDescriptorPtr& option) {

        if (server_selector.amUnassigned()) {
            isc_throw(NotImplemented, "managing configuration for no particular server"
                      " (unassigned) is unsupported at the moment");
        }

        auto tag = getServerTag(server_selector, "creating or updating global option");

        MySqlBindingCollection in_bindings = {
            MySqlBinding::createInteger<uint16_t>(option->option_->getType()),
            createOptionValueBinding(option),
            MySqlBinding::condCreateString(option->formatted_value_),
            MySqlBinding::condCreateString(option->space_name_),
            MySqlBinding::createBool(option->persistent_),
            MySqlBinding::createNull(),
            MySqlBinding::createNull(),
            MySqlBinding::createInteger<uint8_t>(0),
            createInputContextBinding(option),
            MySqlBinding::createNull(),
            MySqlBinding::createNull(),
            MySqlBinding::createTimestamp(option->getModificationTime()),
            MySqlBinding::createNull()
        };

        MySqlTransaction transaction(conn_);
        OptionDescriptorPtr existing_option =
          getOption(GET_OPTION6_CODE_SPACE, Option::V6, server_selector,
                    option->option_->getType(), option->space_name_);

        // Create scoped audit revision. As long as this instance exists
        // no new audit revisions are created in any subsequent calls.
        ScopedAuditRevision
            audit_revision(this,
                           MySqlConfigBackendDHCPv6Impl::CREATE_AUDIT_REVISION,
                           server_selector, "global option set", false);

        if (existing_option) {
            in_bindings.push_back(MySqlBinding::createString(tag));
            in_bindings.push_back(MySqlBinding::createInteger<uint16_t>(option->option_->getType()));
            in_bindings.push_back(MySqlBinding::condCreateString(option->space_name_));
            conn_.updateDeleteQuery(MySqlConfigBackendDHCPv6Impl::UPDATE_OPTION6,
                                    in_bindings);

        } else {
            insertOption6(server_selector, in_bindings);

        }

        transaction.commit();
    }

    /// @brief Sends query to insert or update DHCP option in a subnet.
    ///
    /// @param server_selector Server selector.
    /// @param subnet_id Identifier of the subnet the option belongs to.
    /// @param option Pointer to the option descriptor encapsulating the option.
    /// @param cascade_update Boolean value indicating whether the update is
    /// performed as part of the ownining element, e.g. subnet.
    void createUpdateOption6(const ServerSelector& server_selector,
                             const SubnetID& subnet_id,
                             const OptionDescriptorPtr& option,
                             const bool cascade_update) {

        if (server_selector.amUnassigned()) {
            isc_throw(NotImplemented, "managing configuration for no particular server"
                      " (unassigned) is unsupported at the moment");
        }

        auto tag = getServerTag(server_selector,
                                "creating or updating subnet level option");

        MySqlBindingCollection in_bindings = {
            MySqlBinding::createInteger<uint16_t>(option->option_->getType()),
            createOptionValueBinding(option),
            MySqlBinding::condCreateString(option->formatted_value_),
            MySqlBinding::condCreateString(option->space_name_),
            MySqlBinding::createBool(option->persistent_),
            MySqlBinding::createNull(),
            MySqlBinding::createInteger<uint32_t>(static_cast<uint32_t>(subnet_id)),
            MySqlBinding::createInteger<uint8_t>(1),
            createInputContextBinding(option),
            MySqlBinding::createNull(),
            MySqlBinding::createNull(),
            MySqlBinding::createTimestamp(option->getModificationTime()),
            MySqlBinding::createNull()
        };

        boost::scoped_ptr<MySqlTransaction> transaction;
        // Only start new transaction if specified to do so. This function may
        // be called from within an existing transaction in which case we
        // don't start the new one.
        if (!cascade_update) {
            transaction.reset(new MySqlTransaction(conn_));
        }

        OptionDescriptorPtr existing_option =
            getOption(GET_OPTION6_SUBNET_ID_CODE_SPACE, Option::V6,
                      server_selector, subnet_id,
                      option->option_->getType(),
                      option->space_name_);

        // Create scoped audit revision. As long as this instance exists
        // no new audit revisions are created in any subsequent calls.
        ScopedAuditRevision
            audit_revision(this,
                           MySqlConfigBackendDHCPv6Impl::CREATE_AUDIT_REVISION,
                           server_selector, "subnet specific option set",
                           cascade_update);

        if (existing_option) {
            in_bindings.push_back(MySqlBinding::createString(tag));
            in_bindings.push_back(MySqlBinding::createInteger<uint32_t>(static_cast<uint32_t>(subnet_id)));
            in_bindings.push_back(MySqlBinding::createInteger<uint16_t>(option->option_->getType()));
            in_bindings.push_back(MySqlBinding::condCreateString(option->space_name_));
            conn_.updateDeleteQuery(MySqlConfigBackendDHCPv6Impl::UPDATE_OPTION6_SUBNET_ID,
                                    in_bindings);

        } else {
            insertOption6(server_selector, in_bindings);
        }

        if (transaction) {
            transaction->commit();
        }
    }

    /// @brief Sends query to insert or update DHCP option in a pool.
    ///
    /// @param server_selector Server selector.
    /// @param pool_start_address Lower bound address of the pool.
    /// @param pool_end_address Upper bound address of the pool.
    /// @param option Pointer to the option descriptor encapsulating the option.
    void createUpdateOption6(const ServerSelector& server_selector,
                             const IOAddress& pool_start_address,
                             const IOAddress& pool_end_address,
                             const OptionDescriptorPtr& option) {
        uint64_t pool_id = 0;
        Pool6Ptr pool = getPool6(server_selector, pool_start_address, pool_end_address,
                                 pool_id);
        if (!pool) {
            isc_throw(BadValue, "no pool found for range of "
                      << pool_start_address << " : "
                      << pool_end_address);
        }

        createUpdateOption6(server_selector, Lease::TYPE_NA,
                            pool_id, option, false);
    }


    /// @brief Sends query to insert or update DHCP option in a pd pool.
    ///
    /// @param server_selector Server selector.
    /// @param pd_pool_prefix Address part of the pd pool prefix.
    /// @param pd_pool_prefix_length Length of the pd pool prefix.
    /// @param option Pointer to the option descriptor encapsulating the option.
    void createUpdateOption6(const ServerSelector& server_selector,
                             const asiolink::IOAddress& pd_pool_prefix,
                             const uint8_t pd_pool_prefix_length,
                             const OptionDescriptorPtr& option) {
        uint64_t pd_pool_id = 0;
        Pool6Ptr pd_pool = getPdPool6(server_selector,
                                      pd_pool_prefix,
                                      pd_pool_prefix_length,
                                      pd_pool_id);
        if (!pd_pool) {
            isc_throw(BadValue, "no prefix delegation pool found for prefix "
                      << "of " << pd_pool_prefix << "/"
                      << static_cast<unsigned>(pd_pool_prefix_length));
        }

        createUpdateOption6(server_selector, Lease::TYPE_PD,
                            pd_pool_id, option, false);
    }


    /// @brief Sends query to insert or update DHCP option in an address
    /// or prefix delegation pool.
    ///
    /// @param selector Server selector.
    /// @param pool_type Pool type (Lease::TYPE_NA or Lease::TYPE_PD).
    /// @param pool_id Identifier of the address or prefix delegation pool
    /// the option belongs to.
    /// @param option Pointer to the option descriptor encapsulating the option.
    /// @param cascade_update Boolean value indicating whether the update is
    /// performed as part of the ownining element, e.g. subnet.
    void createUpdateOption6(const ServerSelector& server_selector,
                             const Lease::Type& pool_type,
                             const uint64_t pool_id,
                             const OptionDescriptorPtr& option,
                             const bool cascade_update) {

        if (server_selector.amUnassigned()) {
            isc_throw(NotImplemented, "managing configuration for no particular server"
                      " (unassigned) is unsupported at the moment");
        }

        std::string msg = "creating or updating ";
        if (pool_type == Lease::TYPE_PD) {
            msg += "prefix delegation";
        } else {
            msg += "address";
        }
        msg += " pool level option";
        auto tag = getServerTag(server_selector, msg);

        MySqlBindingCollection in_bindings;
        // code
        in_bindings.push_back(MySqlBinding::createInteger<uint16_t>(option->option_->getType()));
        // value
        in_bindings.push_back(createOptionValueBinding(option));
        // formatted_value
        in_bindings.push_back(MySqlBinding::condCreateString(option->formatted_value_));
        // space
        in_bindings.push_back(MySqlBinding::condCreateString(option->space_name_));
        // persistent
        in_bindings.push_back(MySqlBinding::createBool(option->persistent_));
        // dhcp_client_class
        in_bindings.push_back(MySqlBinding::createNull());
        // dhcp[46]_subnet_id
        in_bindings.push_back(MySqlBinding::createNull());
        // scope_id
        if (pool_type == Lease::TYPE_NA) {
            in_bindings.push_back(MySqlBinding::createInteger<uint8_t>(5));
        } else {
            in_bindings.push_back(MySqlBinding::createInteger<uint8_t>(6));
        }
        // user_context
        in_bindings.push_back(createInputContextBinding(option));
        // shared_network_name
        in_bindings.push_back(MySqlBinding::createNull());
        // pool_id
        if (pool_type == Lease::TYPE_NA) {
            in_bindings.push_back(MySqlBinding::createInteger<uint64_t>(pool_id));
        } else {
            in_bindings.push_back(MySqlBinding::createNull());
        }
        // modification_ts
        in_bindings.push_back(MySqlBinding::createTimestamp(option->getModificationTime()));
        // pd_pool_id
        if (pool_type == Lease::TYPE_PD) {
            in_bindings.push_back(MySqlBinding::createInteger<uint64_t>(pool_id));
        } else {
            in_bindings.push_back(MySqlBinding::createNull());
        }

        MySqlTransaction transaction(conn_);

        const int index = (pool_type == Lease::TYPE_NA ?
                           GET_OPTION6_POOL_ID_CODE_SPACE :
                           GET_OPTION6_PD_POOL_ID_CODE_SPACE);
        OptionDescriptorPtr existing_option =
            getOption(index, server_selector, pool_type, pool_id,
                      option->option_->getType(), option->space_name_);

        // Create scoped audit revision. As long as this instance exists
        // no new audit revisions are created in any subsequent calls.
        if (pool_type == Lease::TYPE_PD) {
            msg = "prefix delegation";
        } else {
            msg = "address";
        }
        msg += " pool specific option set";
        ScopedAuditRevision
            audit_revision(this,
                           MySqlConfigBackendDHCPv6Impl::CREATE_AUDIT_REVISION,
                           server_selector, msg, cascade_update);

        if (existing_option) {
            in_bindings.push_back(MySqlBinding::createString(tag));
            in_bindings.push_back(MySqlBinding::createInteger<uint64_t>(pool_id));
            in_bindings.push_back(MySqlBinding::createInteger<uint16_t>(option->option_->getType()));
            in_bindings.push_back(MySqlBinding::condCreateString(option->space_name_));
            const int index = (pool_type == Lease::TYPE_NA ?
                 MySqlConfigBackendDHCPv6Impl::UPDATE_OPTION6_POOL_ID :
                 MySqlConfigBackendDHCPv6Impl::UPDATE_OPTION6_PD_POOL_ID);
            conn_.updateDeleteQuery(index, in_bindings);

        } else {
            insertOption6(server_selector, in_bindings);
        }

        transaction.commit();
    }

    /// @brief Sends query to insert or update DHCP option in a shared network.
    ///
    /// @param selector Server selector.
    /// @param shared_network_name Name of the shared network the option
    /// belongs to.
    /// @param option Pointer to the option descriptor encapsulating the option.
    /// @param cascade_update Boolean value indicating whether the update is
    /// performed as part of the ownining element, e.g. shared network.
    void createUpdateOption6(const ServerSelector& server_selector,
                             const std::string& shared_network_name,
                             const OptionDescriptorPtr& option,
                             const bool cascade_update) {

        if (server_selector.amUnassigned()) {
            isc_throw(NotImplemented, "managing configuration for no particular server"
                      " (unassigned) is unsupported at the moment");
        }

        auto tag = getServerTag(server_selector, "creating or updating shared"
                                " network level option");

        MySqlBindingCollection in_bindings = {
            MySqlBinding::createInteger<uint16_t>(option->option_->getType()),
            createOptionValueBinding(option),
            MySqlBinding::condCreateString(option->formatted_value_),
            MySqlBinding::condCreateString(option->space_name_),
            MySqlBinding::createBool(option->persistent_),
            MySqlBinding::createNull(),
            MySqlBinding::createNull(),
            MySqlBinding::createInteger<uint8_t>(4),
            createInputContextBinding(option),
            MySqlBinding::createString(shared_network_name),
            MySqlBinding::createNull(),
            MySqlBinding::createTimestamp(option->getModificationTime()),
            MySqlBinding::createNull()
        };

        boost::scoped_ptr<MySqlTransaction> transaction;
        // Only start new transaction if specified to do so. This function may
        // be called from within an existing transaction in which case we
        // don't start the new one.
        if (!cascade_update) {
            transaction.reset(new MySqlTransaction(conn_));
        }

        OptionDescriptorPtr existing_option =
            getOption(GET_OPTION6_SHARED_NETWORK_CODE_SPACE, Option::V6,
                      server_selector, shared_network_name,
                      option->option_->getType(), option->space_name_);

        // Create scoped audit revision. As long as this instance exists
        // no new audit revisions are created in any subsequent calls.
        ScopedAuditRevision
            audit_revision(this,
                           MySqlConfigBackendDHCPv6Impl::CREATE_AUDIT_REVISION,
                           server_selector, "shared network specific option set",
                           cascade_update);

        if (existing_option) {
            in_bindings.push_back(MySqlBinding::createString(tag));
            in_bindings.push_back(MySqlBinding::createString(shared_network_name));
            in_bindings.push_back(MySqlBinding::createInteger<uint16_t>(option->option_->getType()));
            in_bindings.push_back(MySqlBinding::condCreateString(option->space_name_));
            conn_.updateDeleteQuery(MySqlConfigBackendDHCPv6Impl::
                                    UPDATE_OPTION6_SHARED_NETWORK,
                                    in_bindings);
        } else {
            insertOption6(server_selector, in_bindings);
        }

        if (transaction) {
            transaction->commit();
        }
    }

    /// @brief Sends query to insert or update option definition.
    ///
    /// @param server_selector Server selector.
    /// @param option_def Pointer to the option definition to be inserted or updated.
    void createUpdateOptionDef6(const ServerSelector& server_selector,
                                const OptionDefinitionPtr& option_def) {

        createUpdateOptionDef(server_selector, option_def, "dhcp6",
                              MySqlConfigBackendDHCPv6Impl::GET_OPTION_DEF6_CODE_SPACE,
                              MySqlConfigBackendDHCPv6Impl::INSERT_OPTION_DEF6,
                              MySqlConfigBackendDHCPv6Impl::UPDATE_OPTION_DEF6,
                              MySqlConfigBackendDHCPv6Impl::CREATE_AUDIT_REVISION,
                              MySqlConfigBackendDHCPv6Impl::INSERT_OPTION_DEF6_SERVER);
    }

    /// @brief Sends query to delete option definition by code and
    /// option space name.
    ///
    /// @param server_selector Server selector.
    /// @param code Option code.
    /// @param name Option name.
    /// @return Number of deleted option definitions.
    uint64_t deleteOptionDef6(const ServerSelector& server_selector,
                              const uint16_t code,
                              const std::string& space) {

        MySqlBindingCollection in_bindings = {
            MySqlBinding::createInteger<uint16_t>(code),
            MySqlBinding::createString(space)
        };

        // Run DELETE.
        return (deleteTransactional(DELETE_OPTION_DEF6_CODE_NAME, server_selector,
                                    "deleting option definition",
                                    "option definition deleted",
                                    false,
                                    in_bindings));
    }

    /// @brief Deletes global option.
    ///
    /// @param server_selector Server selector.
    /// @param code Code of the deleted option.
    /// @param space Option space of the deleted option.
    /// @return Number of deleted options.
    uint64_t deleteOption6(const ServerSelector& server_selector,
                           const uint16_t code,
                           const std::string& space) {

        MySqlBindingCollection in_bindings = {
            MySqlBinding::createInteger<uint16_t>(code),
            MySqlBinding::createString(space)
        };

        // Run DELETE.
        return (deleteTransactional(DELETE_OPTION6, server_selector,
                                    "deleting global option",
                                    "global option deleted",
                                    false,
                                    in_bindings));
    }

    /// @brief Deletes subnet level option.
    ///
    /// @param server_selector Server selector.
    /// @param subnet_id Identifier of the subnet to which deleted option
    /// belongs.
    /// @param code Code of the deleted option.
    /// @param space Option space of the deleted option.
    /// @return Number of deleted options.
    uint64_t deleteOption6(const ServerSelector& server_selector,
                           const SubnetID& subnet_id,
                           const uint16_t code,
                           const std::string& space) {

        MySqlBindingCollection in_bindings = {
            MySqlBinding::createInteger<uint32_t>(static_cast<uint32_t>(subnet_id)),
            MySqlBinding::createInteger<uint16_t>(code),
            MySqlBinding::createString(space)
        };

        // Run DELETE.
        return (deleteTransactional(DELETE_OPTION6_SUBNET_ID, server_selector,
                                    "deleting option for a subnet",
                                    "subnet specific option deleted",
                                    false,
                                    in_bindings));
    }

    /// @brief Deletes pool level option.
    ///
    /// @param server_selector Server selector.
    /// @param pool_start_address Lower bound pool address.
    /// @param pool_end_address  Upper bound pool address.
    /// @param code Code of the deleted option.
    /// @param space Option space of the deleted option.
    /// @return Number of deleted options.
    uint64_t deleteOption6(const db::ServerSelector& server_selector,
                           const IOAddress& pool_start_address,
                           const IOAddress& pool_end_address,
                           const uint16_t code,
                           const std::string& space) {

        MySqlBindingCollection in_bindings = {
            MySqlBinding::createInteger<uint16_t>(code),
            MySqlBinding::createString(space),
            MySqlBinding::createString(pool_start_address.toText()),
            MySqlBinding::createString(pool_end_address.toText())
        };

        // Run DELETE.
        return (deleteTransactional(DELETE_OPTION6_POOL_RANGE, server_selector,
                                    "deleting option for an address pool",
                                    "address pool specific option deleted",
                                    false,
                                    in_bindings));
    }

    /// @brief Deletes pd pool level option.
    ///
    /// @param server_selector Server selector.
    /// @param pd_pool_prefix Address part of the pd pool prefix.
    /// @param pd_pool_prefix_length Length of the pd pool prefix.
    /// @param code Code of the deleted option.
    /// @param space Option space of the deleted option.
    /// @return Number of deleted options.
    uint64_t deleteOption6(const db::ServerSelector& server_selector,
                           const asiolink::IOAddress& pd_pool_prefix,
                           const uint8_t pd_pool_prefix_length,
                           const uint16_t code,
                           const std::string& space) {

        MySqlBindingCollection in_bindings = {
            MySqlBinding::createInteger<uint16_t>(code),
            MySqlBinding::createString(space),
            MySqlBinding::createString(pd_pool_prefix.toText()),
            MySqlBinding::createInteger<uint8_t>(pd_pool_prefix_length)
        };

        // Run DELETE.
        return (deleteTransactional(DELETE_OPTION6_PD_POOL, server_selector,
                                    "deleting option for a prefix delegation pool",
                                    "prefix delegation pool specific option deleted",
                                    false,
                                    in_bindings));
    }

    /// @brief Deletes shared network level option.
    ///
    /// @param server_selector Server selector.
    /// @param shared_network_name Name of the shared network which deleted
    /// option belongs to
    /// @param code Code of the deleted option.
    /// @param space Option space of the deleted option.
    /// @return Number of deleted options.
    uint64_t deleteOption6(const db::ServerSelector& server_selector,
                           const std::string& shared_network_name,
                           const uint16_t code,
                           const std::string& space) {

        MySqlBindingCollection in_bindings = {
            MySqlBinding::createString(shared_network_name),
            MySqlBinding::createInteger<uint16_t>(code),
            MySqlBinding::createString(space)
        };

        // Run DELETE.
        return (deleteTransactional(DELETE_OPTION6_SHARED_NETWORK, server_selector,
                                    "deleting option for a shared network",
                                    "shared network specific option deleted",
                                    false,
                                    in_bindings));
    }

    /// @brief Deletes options belonging to a subnet from the database.
    ///
    /// @param server_selector Server selector.
    /// @param subnet Pointer to the subnet for which options should be
    /// deleted.
    /// @return Number of deleted options.
    uint64_t deleteOptions6(const ServerSelector& server_selector,
                            const Subnet6Ptr& subnet) {

        MySqlBindingCollection in_bindings = {
            MySqlBinding::createInteger<uint32_t>(subnet->getID())
        };

        // Run DELETE.
        return (deleteTransactional(DELETE_OPTIONS6_SUBNET_ID, server_selector,
                                    "deleting options for a subnet",
                                    "subnet specific options deleted",
                                    true,
                                    in_bindings));
    }

    /// @brief Deletes options belonging to a shared network from the database.
    ///
    /// @param server_selector Server selector.
    /// @param subnet Pointer to the subnet for which options should be
    /// deleted.
    /// @return Number of deleted options.
    uint64_t deleteOptions6(const ServerSelector& server_selector,
                            const SharedNetwork6Ptr& shared_network) {

        MySqlBindingCollection in_bindings = {
            MySqlBinding::createString(shared_network->getName())
        };

        // Run DELETE.
        return (deleteTransactional(DELETE_OPTIONS6_SHARED_NETWORK, server_selector,
                                    "deleting options for a shared network",
                                    "shared network specific options deleted",
                                    true,
                                    in_bindings));
    }
};

namespace {

/// @brief Array of tagged statements.
typedef std::array<TaggedStatement, MySqlConfigBackendDHCPv6Impl::NUM_STATEMENTS>
TaggedStatementArray;

/// @brief Prepared MySQL statements used by the backend to insert and
/// retrieve data from the database.
TaggedStatementArray tagged_statements = { {
    { MySqlConfigBackendDHCPv6Impl::CREATE_AUDIT_REVISION,
      "CALL createAuditRevisionDHCP6(?, ?, ?, ?)"
    },

    // Select global parameter by name.
    { MySqlConfigBackendDHCPv6Impl::GET_GLOBAL_PARAMETER6,
      MYSQL_GET_GLOBAL_PARAMETER(dhcp6, AND g.name = ?)
    },

    // Select all global parameters.
    { MySqlConfigBackendDHCPv6Impl::GET_ALL_GLOBAL_PARAMETERS6,
      MYSQL_GET_GLOBAL_PARAMETER(dhcp6)
    },

    // Select modified global parameters.
    { MySqlConfigBackendDHCPv6Impl::GET_MODIFIED_GLOBAL_PARAMETERS6,
      MYSQL_GET_GLOBAL_PARAMETER(dhcp6, AND g.modification_ts > ?)
    },

    // Select subnet by id.
    { MySqlConfigBackendDHCPv6Impl::GET_SUBNET6_ID,
      MYSQL_GET_SUBNET6(AND s.subnet_id = ?)
    },

    // Select subnet by prefix.
    { MySqlConfigBackendDHCPv6Impl::GET_SUBNET6_PREFIX,
      MYSQL_GET_SUBNET6(AND s.subnet_prefix = ?)
    },

    // Select all subnets.
    { MySqlConfigBackendDHCPv6Impl::GET_ALL_SUBNETS6,
      MYSQL_GET_SUBNET6()
    },

    // Select subnets having modification time later than X.
    { MySqlConfigBackendDHCPv6Impl::GET_MODIFIED_SUBNETS6,
      MYSQL_GET_SUBNET6(AND s.modification_ts > ?)
    },

    // Select subnets belonging to a shared network.
    { MySqlConfigBackendDHCPv6Impl::GET_SHARED_NETWORK_SUBNETS6,
      MYSQL_GET_SUBNET6(AND s.shared_network_name = ?)
    },

    // Select pool by address range.
    { MySqlConfigBackendDHCPv6Impl::GET_POOL6_RANGE,
      "SELECT"
      "  p.id,"
      "  p.start_address,"
      "  p.end_address,"
      "  p.subnet_id,"
      "  p.modification_ts,"
      "  x.option_id,"
      "  x.code,"
      "  x.value,"
      "  x.formatted_value,"
      "  x.space,"
      "  x.persistent,"
      "  x.dhcp6_subnet_id,"
      "  x.scope_id,"
      "  x.user_context,"
      "  x.shared_network_name,"
      "  x.pool_id,"
      "  x.modification_ts,"
      "  x.pd_pool_id "
      "FROM dhcp6_pool AS p "
      "LEFT JOIN dhcp6_options AS x ON x.scope_id = 5 AND p.id = x.pool_id "
      "WHERE p.start_address = ? AND p.end_address = ? "
      "ORDER BY p.id, x.option_id"
    },

    // Select prefix delegation pool.
    { MySqlConfigBackendDHCPv6Impl::GET_PD_POOL,
      "SELECT"
      "  p.id,"
      "  p.prefix,"
      "  p.prefix_length,"
      "  p.delegated_prefix_length,"
      "  p.subnet_id,"
      "  p.modification_ts,"
      "  x.option_id,"
      "  x.code,"
      "  x.value,"
      "  x.formatted_value,"
      "  x.space,"
      "  x.persistent,"
      "  x.dhcp6_subnet_id,"
      "  x.scope_id,"
      "  x.user_context,"
      "  x.shared_network_name,"
      "  x.pool_id,"
      "  x.modification_ts,"
      "  x.pd_pool_id "
      "FROM dhcp6_pd_pool AS p "
      "LEFT JOIN dhcp6_options AS x ON x.scope_id = 6 AND p.id = x.pd_pool_id "
      "WHERE p.prefix = ? AND p.prefix_length = ? "
      "ORDER BY p.id, x.option_id"
    },

    // Select shared network by name.
    { MySqlConfigBackendDHCPv6Impl::GET_SHARED_NETWORK6_NAME,
      MYSQL_GET_SHARED_NETWORK6(AND n.name = ?)
    },

    // Select all shared networks.
    { MySqlConfigBackendDHCPv6Impl::GET_ALL_SHARED_NETWORKS6,
      MYSQL_GET_SHARED_NETWORK6()
    },

    // Select modified shared networks.
    { MySqlConfigBackendDHCPv6Impl::GET_MODIFIED_SHARED_NETWORKS6,
      MYSQL_GET_SHARED_NETWORK6(AND n.modification_ts > ?)
    },

    // Retrieves option definition by code and space.
    { MySqlConfigBackendDHCPv6Impl::GET_OPTION_DEF6_CODE_SPACE,
      MYSQL_GET_OPTION_DEF(dhcp6, AND d.code = ? AND d.space = ?)
    },

    // Retrieves all option definitions.
    { MySqlConfigBackendDHCPv6Impl::GET_ALL_OPTION_DEFS6,
      MYSQL_GET_OPTION_DEF(dhcp6)
    },

    // Retrieves modified option definitions.
    { MySqlConfigBackendDHCPv6Impl::GET_MODIFIED_OPTION_DEFS6,
      MYSQL_GET_OPTION_DEF(dhcp6, AND d.modification_ts > ?)
    },

    // Retrieves global option by code and space.
    { MySqlConfigBackendDHCPv6Impl::GET_OPTION6_CODE_SPACE,
      MYSQL_GET_OPTION6(AND o.scope_id = 0 AND o.code = ? AND o.space = ?)
    },

    // Retrieves all global options.
    { MySqlConfigBackendDHCPv6Impl::GET_ALL_OPTIONS6,
      MYSQL_GET_OPTION6(AND o.scope_id = 0)
    },

    // Retrieves modified options.
    { MySqlConfigBackendDHCPv6Impl::GET_MODIFIED_OPTIONS6,
      MYSQL_GET_OPTION6(AND o.scope_id = 0 AND o.modification_ts > ?)
    },

    // Retrieves an option for a given subnet, option code and space.
    { MySqlConfigBackendDHCPv6Impl::GET_OPTION6_SUBNET_ID_CODE_SPACE,
      MYSQL_GET_OPTION6(AND o.scope_id = 1 AND o.dhcp6_subnet_id = ? AND o.code = ? AND o.space = ?)
    },

    // Retrieves an option for a given pool, option code and space.
    { MySqlConfigBackendDHCPv6Impl::GET_OPTION6_POOL_ID_CODE_SPACE,
      MYSQL_GET_OPTION6(AND o.scope_id = 5 AND o.pool_id = ? AND o.code = ? AND o.space = ?)
    },

    // Retrieves an option for a given pd pool, option code and space.
    { MySqlConfigBackendDHCPv6Impl::GET_OPTION6_PD_POOL_ID_CODE_SPACE,
      MYSQL_GET_OPTION6(AND o.scope_id = 6 AND o.pd_pool_id = ? AND o.code = ? AND o.space = ?)
    },

    // Retrieves an option for a given shared network, option code and space.
    { MySqlConfigBackendDHCPv6Impl::GET_OPTION6_SHARED_NETWORK_CODE_SPACE,
      MYSQL_GET_OPTION6(AND o.scope_id = 4 AND o.shared_network_name = ? AND o.code = ? AND o.space = ?)
    },

    // Retrieves the most recent audit entries.
    { MySqlConfigBackendDHCPv6Impl::GET_AUDIT_ENTRIES6_TIME,
      MYSQL_GET_AUDIT_ENTRIES_TIME(dhcp6)
    },

    // Insert global parameter.
    { MySqlConfigBackendDHCPv6Impl::INSERT_GLOBAL_PARAMETER6,
      MYSQL_INSERT_GLOBAL_PARAMETER(dhcp6)
    },

    // Insert association of the global parameter with a server.
    { MySqlConfigBackendDHCPv6Impl::INSERT_GLOBAL_PARAMETER6_SERVER,
      MYSQL_INSERT_GLOBAL_PARAMETER_SERVER(dhcp6)
    },

    // Insert a subnet.
    { MySqlConfigBackendDHCPv6Impl::INSERT_SUBNET6,
      "INSERT INTO dhcp6_subnet("
      "  subnet_id,"
      "  subnet_prefix,"
      "  client_class,"
      "  interface,"
      "  modification_ts,"
      "  preferred_lifetime,"
      "  rapid_commit,"
      "  rebind_timer,"
      "  relay,"
      "  renew_timer,"
      "  require_client_classes,"
      "  reservation_mode,"
      "  shared_network_name,"
      "  user_context,"
      "  valid_lifetime,"
      "  calculate_tee_times,"
      "  t1_percent,"
      "  t2_percent "
      ") VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)" },

    // Insert association of the subnet with a server.
    { MySqlConfigBackendDHCPv6Impl::INSERT_SUBNET6_SERVER,
      MYSQL_INSERT_SUBNET_SERVER(dhcp6)
    },

    // Insert pool for a subnet.
    { MySqlConfigBackendDHCPv6Impl::INSERT_POOL6,
      MYSQL_INSERT_POOL(dhcp6)
    },

    // Insert pd pool for a subnet.
    { MySqlConfigBackendDHCPv6Impl::INSERT_PD_POOL,
      MYSQL_INSERT_PD_POOL()
    },

    // Insert a shared network.
    { MySqlConfigBackendDHCPv6Impl::INSERT_SHARED_NETWORK6,
      "INSERT INTO dhcp6_shared_network("
      "  name,"
      "  client_class,"
      "  interface,"
      "  modification_ts,"
      "  preferred_lifetime,"
      "  rapid_commit,"
      "  rebind_timer,"
      "  relay,"
      "  renew_timer,"
      "  require_client_classes,"
      "  reservation_mode,"
      "  user_context,"
      "  valid_lifetime,"
      "  calculate_tee_times,"
      "  t1_percent,"
      "  t2_percent "
      ") VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)" },

    // Insert association of the shared network with a server.
    { MySqlConfigBackendDHCPv6Impl::INSERT_SHARED_NETWORK6_SERVER,
      MYSQL_INSERT_SHARED_NETWORK_SERVER(dhcp6)
    },

    // Insert option definition.
    { MySqlConfigBackendDHCPv6Impl::INSERT_OPTION_DEF6,
      MYSQL_INSERT_OPTION_DEF(dhcp6)
    },

    // Insert association of the option definition with a server.
    { MySqlConfigBackendDHCPv6Impl::INSERT_OPTION_DEF6_SERVER,
      MYSQL_INSERT_OPTION_DEF_SERVER(dhcp6)
    },

    // Insert subnet specific option.
    { MySqlConfigBackendDHCPv6Impl::INSERT_OPTION6,
      MYSQL_INSERT_OPTION6()
    },

    // Insert association of the DHCP option with a server.
    { MySqlConfigBackendDHCPv6Impl::INSERT_OPTION6_SERVER,
      MYSQL_INSERT_OPTION_SERVER(dhcp6)
    },

    // Update existing global parameter.
    { MySqlConfigBackendDHCPv6Impl::UPDATE_GLOBAL_PARAMETER6,
      MYSQL_UPDATE_GLOBAL_PARAMETER(dhcp6)
    },

    // Update existing subnet.
    { MySqlConfigBackendDHCPv6Impl::UPDATE_SUBNET6,
      "UPDATE dhcp6_subnet SET"
      "  subnet_id = ?,"
      "  subnet_prefix = ?,"
      "  client_class = ?,"
      "  interface = ?,"
      "  modification_ts = ?,"
      "  preferred_lifetime = ?,"
      "  rapid_commit = ?,"
      "  rebind_timer = ?,"
      "  relay = ?,"
      "  renew_timer = ?,"
      "  require_client_classes = ?,"
      "  reservation_mode = ?,"
      "  shared_network_name = ?,"
      "  user_context = ?,"
      "  valid_lifetime = ?,"
      "  calculate_tee_times = ?,"
      "  t1_percent = ?,"
      "  t2_percent = ? "
      "WHERE subnet_id = ? OR subnet_prefix = ?" },

    // Update existing shared network.
    { MySqlConfigBackendDHCPv6Impl::UPDATE_SHARED_NETWORK6,
      "UPDATE dhcp6_shared_network SET"
      "  name = ?,"
      "  client_class = ?,"
      "  interface = ?,"
      "  modification_ts = ?,"
      "  preferred_lifetime = ?,"
      "  rapid_commit = ?,"
      "  rebind_timer = ?,"
      "  relay = ?,"
      "  renew_timer = ?,"
      "  require_client_classes = ?,"
      "  reservation_mode = ?,"
      "  user_context = ?,"
      "  valid_lifetime = ?,"
      "  calculate_tee_times = ?,"
      "  t1_percent = ?,"
      "  t2_percent = ? "
      "WHERE name = ?" },

    // Update existing option definition.
    { MySqlConfigBackendDHCPv6Impl::UPDATE_OPTION_DEF6,
      MYSQL_UPDATE_OPTION_DEF(dhcp6)
    },

    // Update existing global option.
    { MySqlConfigBackendDHCPv6Impl::UPDATE_OPTION6,
      MYSQL_UPDATE_OPTION6(AND o.scope_id = 0 AND o.code = ? AND o.space = ?)
    },

    // Update existing subnet level option.
    { MySqlConfigBackendDHCPv6Impl::UPDATE_OPTION6_SUBNET_ID,
      MYSQL_UPDATE_OPTION6(AND o.scope_id = 1 AND o.dhcp6_subnet_id = ? AND o.code = ? AND o.space = ?)
    },

    // Update existing pool level option.
    { MySqlConfigBackendDHCPv6Impl::UPDATE_OPTION6_POOL_ID,
      MYSQL_UPDATE_OPTION6(AND o.scope_id = 5 AND o.pool_id = ? AND o.code = ? AND o.space = ?)
    },

    // Update existing pd pool level option.
    { MySqlConfigBackendDHCPv6Impl::UPDATE_OPTION6_PD_POOL_ID,
      MYSQL_UPDATE_OPTION6(AND o.scope_id = 6 AND o.pd_pool_id = ? AND o.code = ? AND o.space = ?)
    },

    // Update existing shared network level option.
    { MySqlConfigBackendDHCPv6Impl::UPDATE_OPTION6_SHARED_NETWORK,
      MYSQL_UPDATE_OPTION6(AND o.scope_id = 4 AND o.shared_network_name = ? AND o.code = ? AND o.space = ?)
    },

    // Delete global parameter by name.
    { MySqlConfigBackendDHCPv6Impl::DELETE_GLOBAL_PARAMETER6,
      MYSQL_DELETE_GLOBAL_PARAMETER(dhcp6, AND g.name = ?)
    },

    // Delete all global parameters.
    { MySqlConfigBackendDHCPv6Impl::DELETE_ALL_GLOBAL_PARAMETERS6,
      MYSQL_DELETE_GLOBAL_PARAMETER(dhcp6)
    },

    // Delete subnet by id.
    { MySqlConfigBackendDHCPv6Impl::DELETE_SUBNET6_ID,
      MYSQL_DELETE_SUBNET(dhcp6, AND s.subnet_id = ?)
    },

    // Delete subnet by prefix.
    { MySqlConfigBackendDHCPv6Impl::DELETE_SUBNET6_PREFIX,
      MYSQL_DELETE_SUBNET(dhcp6, AND s.subnet_prefix = ?)
    },

    // Delete all subnets.
    { MySqlConfigBackendDHCPv6Impl::DELETE_ALL_SUBNETS6,
      MYSQL_DELETE_SUBNET(dhcp6)
    },

    // Delete all subnets for a shared network.
    { MySqlConfigBackendDHCPv6Impl::DELETE_ALL_SUBNETS6_SHARED_NETWORK_NAME,
      MYSQL_DELETE_SUBNET(dhcp6, AND s.shared_network_name = ?)
    },

    // Delete pools for a subnet.
    { MySqlConfigBackendDHCPv6Impl::DELETE_POOLS6_SUBNET_ID,
      MYSQL_DELETE_POOLS(dhcp6)
    },

    // Delete pd pools for a subnet.
    { MySqlConfigBackendDHCPv6Impl::DELETE_PD_POOLS_SUBNET_ID,
      MYSQL_DELETE_PD_POOLS()
    },

    // Delete shared network by name.
    { MySqlConfigBackendDHCPv6Impl::DELETE_SHARED_NETWORK6_NAME,
      MYSQL_DELETE_SHARED_NETWORK(dhcp6, AND n.name = ?)
    },

    // Delete all shared networks.
    { MySqlConfigBackendDHCPv6Impl::DELETE_ALL_SHARED_NETWORKS6,
      MYSQL_DELETE_SHARED_NETWORK(dhcp6)
    },

    // Delete option definition.
    { MySqlConfigBackendDHCPv6Impl::DELETE_OPTION_DEF6_CODE_NAME,
      MYSQL_DELETE_OPTION_DEF(dhcp6, AND code = ? AND space = ?)
    },

    // Delete all option definitions.
    { MySqlConfigBackendDHCPv6Impl::DELETE_ALL_OPTION_DEFS6,
      MYSQL_DELETE_OPTION_DEF(dhcp6)
    },

    // Delete single global option.
    { MySqlConfigBackendDHCPv6Impl::DELETE_OPTION6,
      MYSQL_DELETE_OPTION(dhcp6, AND o.scope_id = 0  AND o.code = ? AND o.space = ?)
    },

    // Delete single option from a subnet.
    { MySqlConfigBackendDHCPv6Impl::DELETE_OPTION6_SUBNET_ID,
      MYSQL_DELETE_OPTION(dhcp6,
                          AND o.scope_id = 1 AND o.dhcp6_subnet_id = ? AND o.code = ? AND o.space = ?)
    },

    // Delete single option from a pool.
    { MySqlConfigBackendDHCPv6Impl::DELETE_OPTION6_POOL_RANGE,
      MYSQL_DELETE_OPTION_POOL_RANGE(dhcp6, AND o.scope_id = 5 AND o.code = ? AND o.space = ?)
    },

    // Delete single option from a pd pool.
    { MySqlConfigBackendDHCPv6Impl::DELETE_OPTION6_PD_POOL,
      MYSQL_DELETE_OPTION_PD_POOL(AND o.scope_id = 6 AND o.code = ? AND o.space = ?)
    },

    // Delete single option from a shared network.
    { MySqlConfigBackendDHCPv6Impl::DELETE_OPTION6_SHARED_NETWORK,
      MYSQL_DELETE_OPTION(dhcp6,
                          AND o.scope_id = 4 AND o.shared_network_name = ? AND o.code = ? AND o.space = ?)
    },

    // Delete options belonging to a subnet.
    { MySqlConfigBackendDHCPv6Impl::DELETE_OPTIONS6_SUBNET_ID,
      MYSQL_DELETE_OPTION(dhcp6, AND o.scope_id = 1 AND o.dhcp6_subnet_id = ?)
    },

    // Delete options belonging to a shared_network.
    { MySqlConfigBackendDHCPv6Impl::DELETE_OPTIONS6_SHARED_NETWORK,
      MYSQL_DELETE_OPTION(dhcp6, AND o.scope_id = 4 AND o.shared_network_name = ?)
    }
}
};

}; // end anonymous namespace

MySqlConfigBackendDHCPv6Impl::MySqlConfigBackendDHCPv6Impl(const DatabaseConnection::ParameterMap& parameters)
    : MySqlConfigBackendImpl(parameters) {
    // Prepare query statements. Those are will be only used to retrieve
    // information from the database, so they can be used even if the
    // database is read only for the current user.
    conn_.prepareStatements(tagged_statements.begin(),
                            tagged_statements.end());
//                            tagged_statements.begin() + WRITE_STMTS_BEGIN);
}

MySqlConfigBackendDHCPv6::MySqlConfigBackendDHCPv6(const DatabaseConnection::ParameterMap& parameters)
    : impl_(new MySqlConfigBackendDHCPv6Impl(parameters)) {
}

Subnet6Ptr
MySqlConfigBackendDHCPv6::getSubnet6(const ServerSelector& server_selector,
                                     const std::string& subnet_prefix) const {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_SUBNET6_BY_PREFIX)
        .arg(subnet_prefix);
    return (impl_->getSubnet6(server_selector, subnet_prefix));
}

Subnet6Ptr
MySqlConfigBackendDHCPv6::getSubnet6(const ServerSelector& server_selector,
                                     const SubnetID& subnet_id) const {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_SUBNET6_BY_SUBNET_ID)
        .arg(subnet_id);
    return (impl_->getSubnet6(server_selector, subnet_id));
}

Subnet6Collection
MySqlConfigBackendDHCPv6::getAllSubnets6(const ServerSelector& server_selector) const {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_ALL_SUBNETS6);
    Subnet6Collection subnets;
    impl_->getAllSubnets6(server_selector, subnets);
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_ALL_SUBNETS6_RESULT)
        .arg(subnets.size());
    return (subnets);
}

Subnet6Collection
MySqlConfigBackendDHCPv6::getModifiedSubnets6(const ServerSelector& server_selector,
                                              const boost::posix_time::ptime& modification_time) const {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_MODIFIED_SUBNETS6)
        .arg(util::ptimeToText(modification_time));
    Subnet6Collection subnets;
    impl_->getModifiedSubnets6(server_selector, modification_time, subnets);
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_MODIFIED_SUBNETS6_RESULT)
        .arg(subnets.size());
    return (subnets);
}

Subnet6Collection
MySqlConfigBackendDHCPv6::getSharedNetworkSubnets6(const ServerSelector& server_selector,
                                                   const std::string& shared_network_name) const {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_SHARED_NETWORK_SUBNETS6)
        .arg(shared_network_name);
    Subnet6Collection subnets;
    impl_->getSharedNetworkSubnets6(server_selector, shared_network_name, subnets);
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_SHARED_NETWORK_SUBNETS6_RESULT)
        .arg(subnets.size());
    return (subnets);
}

SharedNetwork6Ptr
MySqlConfigBackendDHCPv6::getSharedNetwork6(const ServerSelector& server_selector,
                                            const std::string& name) const {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_SHARED_NETWORK6)
        .arg(name);
    return (impl_->getSharedNetwork6(server_selector, name));
}

SharedNetwork6Collection
MySqlConfigBackendDHCPv6::getAllSharedNetworks6(const ServerSelector& server_selector) const {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_ALL_SHARED_NETWORKS6);
    SharedNetwork6Collection shared_networks;
    impl_->getAllSharedNetworks6(server_selector, shared_networks);
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_ALL_SHARED_NETWORKS6_RESULT)
        .arg(shared_networks.size());
    return (shared_networks);
}

SharedNetwork6Collection
MySqlConfigBackendDHCPv6::getModifiedSharedNetworks6(const ServerSelector& server_selector,
        const boost::posix_time::ptime& modification_time) const {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_MODIFIED_SHARED_NETWORKS6)
        .arg(util::ptimeToText(modification_time));
    SharedNetwork6Collection shared_networks;
    impl_->getModifiedSharedNetworks6(server_selector, modification_time, shared_networks);
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_MODIFIED_SHARED_NETWORKS6_RESULT)
        .arg(shared_networks.size());
    return (shared_networks);
}

OptionDefinitionPtr
MySqlConfigBackendDHCPv6::getOptionDef6(const ServerSelector& server_selector,
                                        const uint16_t code,
                                        const std::string& space) const {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_OPTION_DEF6)
        .arg(code).arg(space);
    return (impl_->getOptionDef(MySqlConfigBackendDHCPv6Impl::GET_OPTION_DEF6_CODE_SPACE,
                                server_selector, code, space));
}

OptionDefContainer
MySqlConfigBackendDHCPv6::getAllOptionDefs6(const ServerSelector& server_selector) const {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_ALL_OPTION_DEFS6);
    OptionDefContainer option_defs;
    impl_->getAllOptionDefs(MySqlConfigBackendDHCPv6Impl::GET_ALL_OPTION_DEFS6,
                            server_selector, option_defs);
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_ALL_OPTION_DEFS6_RESULT)
        .arg(option_defs.size());
    return (option_defs);
}

OptionDefContainer
MySqlConfigBackendDHCPv6::getModifiedOptionDefs6(const ServerSelector& server_selector,
        const boost::posix_time::ptime& modification_time) const {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_MODIFIED_OPTION_DEFS6)
        .arg(util::ptimeToText(modification_time));
    OptionDefContainer option_defs;
    impl_->getModifiedOptionDefs(MySqlConfigBackendDHCPv6Impl::GET_MODIFIED_OPTION_DEFS6,
                                 server_selector, modification_time, option_defs);
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_MODIFIED_OPTION_DEFS6_RESULT)
        .arg(option_defs.size());
    return (option_defs);
}

OptionDescriptorPtr
MySqlConfigBackendDHCPv6::getOption6(const ServerSelector& server_selector,
                                     const uint16_t code,
                                     const std::string& space) const {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_OPTION6)
        .arg(code).arg(space);
    return (impl_->getOption(MySqlConfigBackendDHCPv6Impl::GET_OPTION6_CODE_SPACE,
                             Option::V6, server_selector, code, space));
}

OptionContainer
MySqlConfigBackendDHCPv6::getAllOptions6(const ServerSelector& server_selector) const {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_ALL_OPTIONS6);
    OptionContainer options = impl_->getAllOptions(MySqlConfigBackendDHCPv6Impl::GET_ALL_OPTIONS6,
            Option::V6, server_selector);
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_ALL_OPTIONS6_RESULT)
        .arg(options.size());
    return (options);
}

OptionContainer
MySqlConfigBackendDHCPv6::getModifiedOptions6(const ServerSelector& server_selector,
        const boost::posix_time::ptime& modification_time) const {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_MODIFIED_OPTIONS6)
        .arg(util::ptimeToText(modification_time));
    OptionContainer options = impl_->getModifiedOptions(MySqlConfigBackendDHCPv6Impl::GET_MODIFIED_OPTIONS6,
            Option::V6, server_selector, modification_time);
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_MODIFIED_OPTIONS6_RESULT)
        .arg(options.size());
    return (options);
}

StampedValuePtr
MySqlConfigBackendDHCPv6::getGlobalParameter6(const ServerSelector& server_selector,
                                              const std::string& name) const {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_GLOBAL_PARAMETER6)
        .arg(name);
    return (impl_->getGlobalParameter6(server_selector, name));
}

StampedValueCollection
MySqlConfigBackendDHCPv6::getAllGlobalParameters6(const ServerSelector& server_selector) const {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_ALL_GLOBAL_PARAMETERS6);
    StampedValueCollection parameters;
    auto tags = impl_->getServerTags(server_selector);
    for (auto tag : tags) {
        MySqlBindingCollection in_bindings = { MySqlBinding::createString(tag) };
        impl_->getGlobalParameters(MySqlConfigBackendDHCPv6Impl::GET_ALL_GLOBAL_PARAMETERS6,
                                   in_bindings, parameters);
    }
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_ALL_GLOBAL_PARAMETERS6_RESULT)
        .arg(parameters.size());
    return (parameters);
}

StampedValueCollection
MySqlConfigBackendDHCPv6::getModifiedGlobalParameters6(const db::ServerSelector& server_selector,
        const boost::posix_time::ptime& modification_time) const {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_MODIFIED_GLOBAL_PARAMETERS6)
        .arg(util::ptimeToText(modification_time));
    StampedValueCollection parameters;
    auto tags = impl_->getServerTags(server_selector);
    for (auto tag : tags) {
        MySqlBindingCollection in_bindings = {
            MySqlBinding::createString(tag),
            MySqlBinding::createTimestamp(modification_time)
        };
        impl_->getGlobalParameters(MySqlConfigBackendDHCPv6Impl::GET_MODIFIED_GLOBAL_PARAMETERS6,
                                   in_bindings, parameters);
    }
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_MODIFIED_GLOBAL_PARAMETERS6_RESULT)
        .arg(parameters.size());
    return (parameters);
}

AuditEntryCollection
MySqlConfigBackendDHCPv6::getRecentAuditEntries(const db::ServerSelector& server_selector,
        const boost::posix_time::ptime& modification_time) const {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_RECENT_AUDIT_ENTRIES6)
        .arg(util::ptimeToText(modification_time));
    AuditEntryCollection audit_entries;
    impl_->getRecentAuditEntries(MySqlConfigBackendDHCPv6Impl::GET_AUDIT_ENTRIES6_TIME,
                                 server_selector, modification_time, audit_entries);
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_RECENT_AUDIT_ENTRIES6_RESULT)
        .arg(audit_entries.size());
    return (audit_entries);
}

void
MySqlConfigBackendDHCPv6::createUpdateSubnet6(const ServerSelector& server_selector,
                                              const Subnet6Ptr& subnet) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_CREATE_UPDATE_SUBNET6)
        .arg(subnet);
    impl_->createUpdateSubnet6(server_selector, subnet);
}

void
MySqlConfigBackendDHCPv6::createUpdateSharedNetwork6(const ServerSelector& server_selector,
                                                     const SharedNetwork6Ptr& shared_network) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_CREATE_UPDATE_SHARED_NETWORK6)
        .arg(shared_network->getName());
    impl_->createUpdateSharedNetwork6(server_selector, shared_network);
}

void
MySqlConfigBackendDHCPv6::createUpdateOptionDef6(const ServerSelector& server_selector,
                                                 const OptionDefinitionPtr& option_def) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_CREATE_UPDATE_OPTION_DEF6)
        .arg(option_def->getName()).arg(option_def->getCode());
    impl_->createUpdateOptionDef6(server_selector, option_def);
}

void
MySqlConfigBackendDHCPv6::createUpdateOption6(const ServerSelector& server_selector,
                                              const OptionDescriptorPtr& option) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_CREATE_UPDATE_OPTION6);
    impl_->createUpdateOption6(server_selector, option);
}

void
MySqlConfigBackendDHCPv6::createUpdateOption6(const db::ServerSelector& server_selector,
                                              const std::string& shared_network_name,
                                              const OptionDescriptorPtr& option) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_CREATE_UPDATE_SHARED_NETWORK_OPTION6)
        .arg(shared_network_name);
    impl_->createUpdateOption6(server_selector, shared_network_name, option, false);
}

void
MySqlConfigBackendDHCPv6::createUpdateOption6(const ServerSelector& server_selector,
                                              const SubnetID& subnet_id,
                                              const OptionDescriptorPtr& option) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_CREATE_UPDATE_BY_SUBNET_ID_OPTION6)
        .arg(subnet_id);
    impl_->createUpdateOption6(server_selector, subnet_id, option, false);
}

void
MySqlConfigBackendDHCPv6::createUpdateOption6(const ServerSelector& server_selector,
                                              const asiolink::IOAddress& pool_start_address,
                                              const asiolink::IOAddress& pool_end_address,
                                              const OptionDescriptorPtr& option) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_CREATE_UPDATE_BY_POOL_OPTION6)
        .arg(pool_start_address.toText()).arg(pool_end_address.toText());
    impl_->createUpdateOption6(server_selector, pool_start_address, pool_end_address,
                               option);
}

void
MySqlConfigBackendDHCPv6::createUpdateOption6(const ServerSelector& server_selector,
                                              const asiolink::IOAddress& pd_pool_prefix,
                                              const uint8_t pd_pool_prefix_length,
                                              const OptionDescriptorPtr& option) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_CREATE_UPDATE_BY_PREFIX_OPTION6)
        .arg(pd_pool_prefix.toText()).arg(pd_pool_prefix_length);
    impl_->createUpdateOption6(server_selector, pd_pool_prefix,
                               pd_pool_prefix_length, option);
}

void
MySqlConfigBackendDHCPv6::createUpdateGlobalParameter6(const ServerSelector& server_selector,
                                                       const StampedValuePtr& value) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_CREATE_UPDATE_GLOBAL_PARAMETER6)
        .arg(value->getName());
    impl_->createUpdateGlobalParameter6(server_selector, value);
}

uint64_t
MySqlConfigBackendDHCPv6::deleteSubnet6(const ServerSelector& server_selector,
                                        const std::string& subnet_prefix) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_DELETE_BY_PREFIX_SUBNET6)
        .arg(subnet_prefix);
    return(impl_->deleteTransactional(MySqlConfigBackendDHCPv6Impl::DELETE_SUBNET6_PREFIX,
                                      server_selector, "deleting a subnet by prefix",
                                      "subnet deleted", true,
                                      subnet_prefix));
}

uint64_t
MySqlConfigBackendDHCPv6::deleteSubnet6(const ServerSelector& server_selector,
                                        const SubnetID& subnet_id) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_DELETE_BY_SUBNET_ID_SUBNET6)
        .arg(subnet_id);
    return (impl_->deleteSubnet6(server_selector, subnet_id));
}

uint64_t
MySqlConfigBackendDHCPv6::deleteAllSubnets6(const ServerSelector& server_selector) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_DELETE_ALL_SUBNETS6);
    return (impl_->deleteTransactional(MySqlConfigBackendDHCPv6Impl::DELETE_ALL_SUBNETS6,
                                       server_selector, "deleting all subnets",
                                       "deleted all subnets", true));
}

uint64_t
MySqlConfigBackendDHCPv6::deleteSharedNetworkSubnets6(const db::ServerSelector& server_selector,
                                                      const std::string& shared_network_name) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_DELETE_SHARED_NETWORK_SUBNETS6)
        .arg(shared_network_name);
    return (impl_->deleteTransactional(MySqlConfigBackendDHCPv6Impl::DELETE_ALL_SUBNETS6_SHARED_NETWORK_NAME,
                                       server_selector,
                                       "deleting all subnets for a shared network",
                                       "deleted all subnets for a shared network",
                                       true, shared_network_name));
}

uint64_t
MySqlConfigBackendDHCPv6::deleteSharedNetwork6(const ServerSelector& server_selector,
                                               const std::string& name) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_DELETE_SHARED_NETWORK6)
        .arg(name);
    return (impl_->deleteTransactional(MySqlConfigBackendDHCPv6Impl::DELETE_SHARED_NETWORK6_NAME,
                                       server_selector, "deleting a shared network",
                                       "shared network deleted", true,
                                       name));
}

uint64_t
MySqlConfigBackendDHCPv6::deleteAllSharedNetworks6(const ServerSelector& server_selector) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_DELETE_ALL_SHARED_NETWORKS6);
    return (impl_->deleteTransactional(MySqlConfigBackendDHCPv6Impl::DELETE_ALL_SHARED_NETWORKS6,
                                       server_selector, "deleting all shared networks",
                                       "deleted all shared networks", true));
}

uint64_t
MySqlConfigBackendDHCPv6::deleteOptionDef6(const ServerSelector& server_selector,
                                           const uint16_t code,
                                           const std::string& space) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_DELETE_OPTION_DEF6)
        .arg(code).arg(space);
    return (impl_->deleteOptionDef6(server_selector, code, space));
}

uint64_t
MySqlConfigBackendDHCPv6::deleteAllOptionDefs6(const ServerSelector& server_selector) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_DELETE_ALL_OPTION_DEFS6);
    return (impl_->deleteTransactional(MySqlConfigBackendDHCPv6Impl::DELETE_ALL_OPTION_DEFS6,
                                       server_selector, "deleting all option definitions",
                                       "deleted all option definitions", true));
}

uint64_t
MySqlConfigBackendDHCPv6::deleteOption6(const ServerSelector& server_selector,
                                        const uint16_t code,
                                        const std::string& space) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_DELETE_OPTION6)
        .arg(code).arg(space);
    return (impl_->deleteOption6(server_selector, code, space));
}

uint64_t
MySqlConfigBackendDHCPv6::deleteOption6(const ServerSelector& server_selector,
                                        const std::string& shared_network_name,
                                        const uint16_t code,
                                        const std::string& space) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_DELETE_SHARED_NETWORK_OPTION6)
        .arg(shared_network_name).arg(code).arg(space);
    return (impl_->deleteOption6(server_selector, shared_network_name,
                                 code, space));
}

uint64_t
MySqlConfigBackendDHCPv6::deleteOption6(const ServerSelector& server_selector,
                                        const SubnetID& subnet_id,
                                        const uint16_t code,
                                        const std::string& space) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_DELETE_BY_SUBNET_ID_OPTION6)
        .arg(subnet_id).arg(code).arg(space);
    return (impl_->deleteOption6(server_selector, subnet_id, code, space));
}

uint64_t
MySqlConfigBackendDHCPv6::deleteOption6(const ServerSelector& server_selector,
                                        const asiolink::IOAddress& pool_start_address,
                                        const asiolink::IOAddress& pool_end_address,
                                        const uint16_t code,
                                        const std::string& space) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_DELETE_BY_POOL_OPTION6)
        .arg(pool_start_address.toText()).arg(pool_end_address.toText()).arg(code).arg(space);
    return (impl_->deleteOption6(server_selector, pool_start_address, pool_end_address,
                                 code, space));
}

uint64_t
MySqlConfigBackendDHCPv6::deleteOption6(const ServerSelector& server_selector,
                                        const asiolink::IOAddress& pd_pool_prefix,
                                        const uint8_t pd_pool_prefix_length,
                                        const uint16_t code,
                                        const std::string& space) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_DELETE_BY_POOL_PREFIX_OPTION6)
        .arg(pd_pool_prefix.toText()).arg(pd_pool_prefix_length).arg(code).arg(space);
    return (impl_->deleteOption6(server_selector, pd_pool_prefix,
                                 pd_pool_prefix_length, code, space));
}

uint64_t
MySqlConfigBackendDHCPv6::deleteGlobalParameter6(const ServerSelector& server_selector,
                                                 const std::string& name) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_DELETE_GLOBAL_PARAMETER6)
        .arg(name);
    return (impl_->deleteTransactional(MySqlConfigBackendDHCPv6Impl::DELETE_GLOBAL_PARAMETER6,
                                       server_selector, "deleting global parameter",
                                       "global parameter deleted", false,
                                       name));
}

uint64_t
MySqlConfigBackendDHCPv6::deleteAllGlobalParameters6(const ServerSelector& server_selector) {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_DELETE_ALL_GLOBAL_PARAMETERS6);
    return (impl_->deleteTransactional(MySqlConfigBackendDHCPv6Impl::DELETE_ALL_GLOBAL_PARAMETERS6,
                                       server_selector, "deleting all global parameters",
                                       "all global parameters deleted", true));
}

std::string
MySqlConfigBackendDHCPv6::getType() const {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_TYPE6);
    return (impl_->getType());
}

std::string
MySqlConfigBackendDHCPv6::getHost() const {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_HOST6);
    return (impl_->getHost());
}

uint16_t
MySqlConfigBackendDHCPv6::getPort() const {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_GET_PORT6);
    return (impl_->getPort());
}

bool
MySqlConfigBackendDHCPv6::registerBackendType() {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_REGISTER_BACKEND_TYPE6);
    return (
        dhcp::ConfigBackendDHCPv6Mgr::instance().registerBackendFactory("mysql",
            [](const db::DatabaseConnection::ParameterMap& params) -> dhcp::ConfigBackendDHCPv6Ptr {
            return (dhcp::MySqlConfigBackendDHCPv6Ptr(new dhcp::MySqlConfigBackendDHCPv6(params)));
        })
    );
}

void
MySqlConfigBackendDHCPv6::unregisterBackendType() {
    LOG_DEBUG(mysql_cb_logger, DBGLVL_TRACE_BASIC, MYSQL_CB_UNREGISTER_BACKEND_TYPE6);
    dhcp::ConfigBackendDHCPv6Mgr::instance().unregisterBackendFactory("mysql");
}

} // end of namespace isc::dhcp
} // end of namespace isc
