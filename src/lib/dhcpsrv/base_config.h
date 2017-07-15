

#ifndef BASE_CONFIG_H
#define BASE_CONFIG_H

#include <dhcpsrv/logging_info.h>
#include <cc/cfg_to_element.h>
#include <cc/data.h>
#include <vector>
#include <stdint.h>

namespace isc {
namespace process {

class BaseConfig : public isc::data::CfgToElement {
 protected:

    /// @brief Default constructor.
    ///
    /// This constructor sets configuration sequence number to 0.
    BaseConfig()
        :sequence_(0) {}

    /// @brief Constructor.
    ///
    /// Sets arbitrary configuration sequence number.
    BaseConfig(const uint32_t sequence)
        :sequence_(sequence) {}

 public:
    /// @brief Returns summary of the configuration in the textual format.
    ///
    /// This method is expected to be provided by derived implementations.
    ///
    /// @param selection Is a bitfield which describes the parts of the
    /// configuration to be returned.
    ///
    /// @return Summary of the configuration in the textual format.
    virtual std::string getConfigSummary(const uint32_t selection) const = 0;

    /// @brief Returns configuration sequence number.
    uint32_t getSequence() const {
        return (sequence_);
    }
 
    /// @brief Unparse a configuration object
    ///
    /// @return a pointer to unparsed configuration
    virtual isc::data::ElementPtr toElement() const = 0;

        /// @name Modifiers and accesors for the configuration objects.
    ///
    /// @warning References to the objects returned by accessors are only
    /// valid during the lifetime of the @c SrvConfig object which
    /// returned them.
    ///
    //@{
    /// @brief Returns logging specific configuration.
    const dhcp::LoggingInfoStorage& getLoggingInfo() const {
        return (logging_info_);
    }

    /// @brief Sets logging specific configuration.
    ///
    /// @param logging_info New logging configuration.
    void addLoggingInfo(const dhcp::LoggingInfo& logging_info) {
        logging_info_.push_back(logging_info);
    }

 protected:
    /// @brief Sequence number identifying the configuration.
    uint32_t sequence_;

    /// @brief Logging specific information.
    dhcp::LoggingInfoStorage logging_info_;

};

};
};

#endif
