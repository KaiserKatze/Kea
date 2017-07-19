#include <process/base_cfg_mgr.h>
#include <asiolink/io_address.h>

#include <iostream>

namespace isc {
namespace process {

const size_t BaseCfgMgr::CONFIG_LIST_SIZE = 10;

BaseCfgMgr* BaseCfgMgr::instance_ = 0;

BaseCfgMgr::BaseCfgMgr(bool verbose)
  :verbose_mode_(verbose) {
    setInstance(this);
}

BaseCfgMgr::~BaseCfgMgr() {
    setInstance(0);
}

BaseCfgMgr& BaseCfgMgr::instance() {
    if (!instance_) {
        isc_throw(Unexpected, "Configuration Manager not instantiated");
    }

    return (*instance_);
}

void BaseCfgMgr::setInstance(BaseCfgMgr* instance) {
    instance_ = instance;
}

BaseConfigPtr BaseCfgMgr::getCurrentCfgBase() {
    ensureCurrentAllocated();

    return (configuration_);
}

BaseConfigPtr BaseCfgMgr::getStagingCfgBase() {
    ensureCurrentAllocated();
    return (configs_.back());
}

void BaseCfgMgr::commit() {
    if (!configs_.back()->sequenceEquals(*configuration_)) {
        configuration_ = configs_.back();
        // Keep track of the maximum size of the configs history. Before adding
        // new element, we have to remove the oldest one.
        if (configs_.size() > CONFIG_LIST_SIZE) {
            SrvConfigList::iterator it = configs_.begin();
            std::advance(it, configs_.size() - CONFIG_LIST_SIZE);
            configs_.erase(configs_.begin(), it);
        }
    }
}

void BaseCfgMgr::revert(const size_t index) {
    ensureCurrentAllocated();
    if (index == 0) {
        isc_throw(isc::OutOfRange, "invalid commit index 0 when reverting"
                  " to an old configuration");
    } else if (index > configs_.size() - 1) {
        isc_throw(isc::OutOfRange, "unable to revert to commit index '"
                  << index << "', only '" << configs_.size() - 1
                  << "' previous commits available");
    }

    // Let's rollback an existing configuration to make sure that the last
    // configuration on the list is the current one. Note that all remaining
    // operations in this function should be exception free so there shouldn't
    // be a problem that the revert operation fails and the staging
    // configuration is destroyed by this rollback.
    rollback();

    // Get the iterator to the current configuration and then advance to the
    // desired one.
    SrvConfigList::const_reverse_iterator it = configs_.rbegin();
    std::advance(it, index);

    // Copy the desired configuration to the new staging configuration. The
    // staging configuration is re-created here because we rolled back earlier
    // in this function.
    configs_.back() = (*it)->clone();

    // Make the staging configuration a current one.
    commit();
}

void BaseCfgMgr::clear() {
    configs_.clear();
    ensureCurrentAllocated();
}

void
BaseCfgMgr::rollback() {
    ensureCurrentAllocated();
    if (!configuration_->sequenceEquals(*configs_.back())) {
        configs_.pop_back();
    }
}
    
};
};
