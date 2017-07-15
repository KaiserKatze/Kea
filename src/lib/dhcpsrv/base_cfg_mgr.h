#ifndef BASE_CFG_MGR_H
#define BASE_CFG_MGR_H

#include <util/buffer.h>

#include <boost/noncopyable.hpp>

#include <string>

namespace isc {
namespace process {

class BaseCfgMgr :  public boost::noncopyable {
 protected:
    BaseCfgMgr(const std::string& datadir, const uint16_t family, bool verbose)
        :datadir_(datadir), verbose_mode_(verbose), family_(family) {
    }

    virtual ~BaseCfgMgr() {
    }

 public:
    /// @brief A number of configurations held by @c CfgMgr.
    ///
    /// @todo Make it configurable.
    static const size_t CONFIG_LIST_SIZE;

    /// @brief returns path do the data directory
    ///
    /// This method returns a path to writable directory that DHCP servers
    /// can store data in.
    /// @return data directory
    std::string getDataDir() const;

    /// @brief Sets new data directory.
    ///
    /// @param datadir New data directory.
    void setDataDir(const std::string& datadir);

    /// @brief Removes current, staging and all previous configurations.
    ///
    /// This function removes all configurations, including current and
    /// staging configurations. It creates a new current configuration with
    /// default settings.
    ///
    /// This function is exception safe.
    virtual void clear() = 0;

    /// @brief Commits the staging configuration.
    ///
    /// The staging configuration becomes current configuration when this
    /// function is called. It removes the oldest configuration held in the
    /// history so as the size of the list of configuration does not exceed
    /// the @c CONFIG_LIST_SIZE.
    ///
    /// This function is exception safe.
    virtual void commit() = 0;

    /// @brief Removes staging configuration.
    ///
    /// This function should be called when there is a staging configuration
    /// (likely created in the previous configuration attempt) but the entirely
    /// new configuration should be created. It removes the existing staging
    /// configuration and the next call to @c CfgMgr::getStagingCfg will return a
    /// fresh (default) configuration.
    ///
    /// This function is exception safe.
    virtual void rollback() = 0;

    /// @brief Reverts to one of the previous configurations.
    ///
    /// This function reverts to selected previous configuration. The previous
    /// configuration is entirely copied to a new @c SrvConfig instance. This
    /// new instance has a unique sequence id (sequence id is not copied). The
    /// previous configuration (being copied) is not modified by this operation.
    ///
    /// The configuration to be copied is identified by the index value which
    /// is the distance between the current (most recent) and desired
    /// configuration. If the index is out of range an exception is thrown.
    ///
    /// @warning Revert operation will rollback any changes to the staging
    /// configuration (if it exists).
    ///
    /// @warning This function requires that the entire previous configuration
    /// is copied to the new configuration object. This is not working for
    /// some of the complex configuration objects, e.g. subnets. Hence, the
    /// "revert" operation is not really usable at this point.
    ///
    /// @param index A distance from the current configuration to the
    /// past configuration to be reverted. The minimal value is 1 which points
    /// to the nearest configuration.
    ///
    /// @throw isc::OutOfRange if the specified index is out of range.
    virtual void revert(const size_t index) = 0;

        /// @name Methods setting/accessing global configuration for the process.
    ///
    //@{
    /// @brief Sets verbose mode.
    ///
    /// @param verbose A boolean value indicating if the process should run
    /// in verbose (true) or non-verbose mode.
    void setVerbose(const bool verbose) {
        verbose_mode_ = verbose;
    }

    /// @brief Checks if the process has been run in verbose mode.
    ///
    /// @return true if verbose mode enabled, false otherwise.
    bool isVerbose() const {
        return (verbose_mode_);
    }

    /// @brief Sets the default logger name.
    ///
    /// This name is used in cases when a user doesn't provide a configuration
    /// for logger in the Kea configuration file.
    void setDefaultLoggerName(const std::string& name) {
        default_logger_name_ = name;
    }

    /// @brief Returns default logger name.
    std::string getDefaultLoggerName() const {
        return (default_logger_name_);
    }

    /// @brief Sets address family (AF_INET or AF_INET6)
    void setFamily(uint16_t family);

    /// @brief Returns address family.
    uint16_t getFamily() const {
        return (family_);
    }

    //@}
 private:
    /// @brief directory where data files (e.g. server-id) are stored
    std::string datadir_;

    /// @brief Indicates if a process has been ran in the verbose mode.
    bool verbose_mode_;

    /// @brief Default logger name.
    std::string default_logger_name_;

    /// @brief Address family.
    uint16_t family_;
};

};
};

#endif
