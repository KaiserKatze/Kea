

#ifndef BASE_CONFIG_H
#define BASE_CONFIG_H

#include <process/logging_info.h>
#include <cc/cfg_to_element.h>
#include <cc/data.h>

#include <boost/shared_ptr.hpp>

#include <vector>
#include <stdint.h>

namespace isc {
namespace process {

class BaseConfig;

typedef boost::shared_ptr<BaseConfig> BaseConfigPtr;

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

        /// @brief Compares configuration sequence with other sequence.
    ///
    /// This method compares sequence numbers of two configurations for
    /// equality. The sequence numbers are meant to be unique, so if
    /// they are equal it means that they point to the same configuration.
    ///
    /// @param other Configuration which sequence number should be
    /// compared with the sequence number of this configuration.
    ///
    /// @return true if sequence numbers are equal.
    bool sequenceEquals(const BaseConfig& other) {
        return (getSequence() == other.getSequence());
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

    void applyLoggingCfg() const;

    /// @brief Copies the current configuration to a new configuration.
    ///
    /// This method copies the parameters stored in the configuration to
    /// an object passed as parameter. The configuration sequence is not
    /// copied.
    ///
    /// @warning Some of the configuration objects are not copied at
    /// this point, e.g. subnets. This is because they contain quite complex
    /// data structures and they make use of pointers, so in many cases
    /// the default copy constructors can't be used. Implementing this
    /// requires quite a lot of time so this is left as is for now.
    /// The lack of ability to copy the entire configuration makes
    /// revert function of the @c CfgMgr unsuable.
    ///
    /// @param [out] new_config An object to which the configuration will
    /// be copied.
    virtual BaseConfigPtr clone() const = 0;

 protected:
    /// @brief Sequence number identifying the configuration.
    uint32_t sequence_;

    /// @brief Logging specific information.
    dhcp::LoggingInfoStorage logging_info_;

};

typedef boost::shared_ptr<BaseConfig> BaseConfigPtr;

};
};

#endif
