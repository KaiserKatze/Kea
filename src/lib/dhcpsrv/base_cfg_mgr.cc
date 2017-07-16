#include <dhcpsrv/base_cfg_mgr.h>
#include <asiolink/io_address.h>

namespace isc {
namespace process {

const size_t BaseCfgMgr::CONFIG_LIST_SIZE = 10;

BaseCfgMgr* BaseCfgMgr::instance_ = 0;

BaseCfgMgr& BaseCfgMgr::instance() {
    if (!instance_) {
        isc_throw(Unexpected, "Configuration Manager not instantiated");
    }

    return (*instance_);
}

void BaseCfgMgr::setInstance(BaseCfgMgr* instance) {
    instance_ = instance;
}

std::string BaseCfgMgr::getDataDir() const {
    return (datadir_);
}

void
BaseCfgMgr::setDataDir(const std::string& datadir) {
    datadir_ = datadir;
}


void BaseCfgMgr::setFamily(uint16_t family) {
    family_ = family == AF_INET ? AF_INET : AF_INET6;
}

BaseConfigPtr BaseCfgMgr::getCurrentCfgBase() {
    ensureCurrentAllocated();

    return (configuration_);
}

BaseConfigPtr BaseCfgMgr::getStagingCfgBase() {
    ensureCurrentAllocated();
    return (configs_.back());
}

    
};
};
