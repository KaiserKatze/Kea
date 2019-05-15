// Copyright (C) 2019 Internet Systems Consortium, Inc. ("ISC")
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include <config.h>
#include <dhcpsrv/triplet.h>
#include <dhcpsrv/parsers/base_network_parser.h>
#include <util/optional.h>

using namespace isc::data;
using namespace isc::util;

namespace isc {
namespace dhcp {

const Triplet<uint32_t>
BaseNetworkParser::parseLifetime(const ConstElementPtr& scope,
                                 const std::string& name) {
    uint32_t value;
    bool has_value = false;
    uint32_t min_value;
    bool has_min = false;
    uint32_t max_value;
    bool has_max = false;
    if (scope->contains(name)) {
        value = getInteger(scope, name);
        has_value = true;
    }
    if (scope->contains("default-" + name)) {
        if (has_value) {
            isc_throw(DhcpConfigError, "have both " << name << " and default-"
                      << name << " in " << scope->getPosition());
        }
        value = getInteger(scope, "default-" + name);
        has_value = true;
    }
    if (scope->contains("min-" + name)) {
        min_value = getInteger(scope, "min-" + name);
        has_min = true;
    }
    if (scope->contains("max-" + name)) {
        max_value = getInteger(scope, "max-" + name);
        has_max = true;
    }
    if (!has_value && !has_min && !has_max) {
        return (Triplet<uint32_t>());
    }
    if (has_value) {
        if (!has_min && !has_max) {
            // default only.
            min_value = value;
            max_value = value;
        } else if (!has_min) {
            // default and max.
            min_value = value;
        } else if (!has_max) {
            // default and min.
            max_value = value;
        }
    } else if (has_min) {
        // min only.
        if (!has_max) {
            value = min_value;
            max_value = min_value;
        } else {
            // min and max.
            isc_throw(DhcpConfigError, "have min-" << name << " and max-"
                      << name << " but no default-" << name << " nor "
                      << name << " in " << scope->getPosition());
        }
    } else {
        // max only.
        min_value = max_value;
        value = max_value;
    }
    // Check that value is between min and max.
    if ((value < min_value) || (value > max_value)) {
        isc_throw(DhcpConfigError, "the value of default-" << name << " ("
                  << value << ") is not between min-" << name << " ("
                  << min_value << ") and max-" << name << " ("
                  << max_value << ")");
    }
    return (Triplet<uint32_t>(min_value, value, max_value));
}

void
BaseNetworkParser::parseCommonTimers(const ConstElementPtr& network_data,
                                     NetworkPtr& network) {
    if (network_data->contains("renew-timer")) {
        network->setT1(getInteger(network_data, "renew-timer"));
    }

    if (network_data->contains("rebind-timer")) {
        network->setT2(getInteger(network_data, "rebind-timer"));
    }

    network->setValid(parseLifetime(network_data, "valid-lifetime"));
}

void
BaseNetworkParser::parseTeePercents(const ConstElementPtr& network_data,
                                    NetworkPtr& network) {
    bool calculate_tee_times = network->getCalculateTeeTimes();
    if (network_data->contains("calculate-tee-times")) {
        bool calculate_tee_times = getBoolean(network_data, "calculate-tee-times");
        network->setCalculateTeeTimes(calculate_tee_times);
    }

    Optional<double> t2_percent;
    if (network_data->contains("t2-percent")) {
        t2_percent = getDouble(network_data, "t2-percent");
    }

    Optional<double> t1_percent;
    if (network_data->contains("t1-percent")) {
        t1_percent = getDouble(network_data, "t1-percent");
    }
    if (calculate_tee_times) {
        if (!t2_percent.unspecified() && ((t2_percent.get() <= 0.0) ||
                                          (t2_percent.get() >= 1.0))) {
            isc_throw(DhcpConfigError, "t2-percent:  " << t2_percent.get()
                      << " is invalid, it must be greater than 0.0 and less than 1.0");
        }

        if (!t1_percent.unspecified() && ((t1_percent.get() <= 0.0) ||
                                          (t1_percent.get() >= 1.0))) {
            isc_throw(DhcpConfigError, "t1-percent:  " << t1_percent.get()
                      << " is invalid it must be greater than 0.0 and less than 1.0");
        }

        if (!t1_percent.unspecified() && !t2_percent.unspecified() &&
            (t1_percent.get() >= t2_percent.get())) {
            isc_throw(DhcpConfigError, "t1-percent:  " << t1_percent.get()
                      << " is invalid, it must be less than t2-percent: "
                      << t2_percent.get());
        }
    }

    network->setT2Percent(t2_percent);
    network->setT1Percent(t1_percent);
}

void
BaseNetworkParser::parseHostReservationMode(const data::ConstElementPtr& network_data,
                                            NetworkPtr& network) {
    if (network_data->contains("reservation-mode")) {
        try {
            std::string hr_mode = getString(network_data, "reservation-mode");
            network->setHostReservationMode(Network::hrModeFromString(hr_mode));
        } catch (const BadValue& ex) {
            isc_throw(DhcpConfigError, "invalid reservation-mode parameter: "
                      << ex.what() << " (" << getPosition("reservation-mode",
                                                          network_data) << ")");
        }
    }
}



} // end of namespace isc::dhcp
} // end of namespace isc
