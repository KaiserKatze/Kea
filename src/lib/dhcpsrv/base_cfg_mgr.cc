#include <dhcpsrv/base_cfg_mgr.h>
#include <asiolink/io_address.h>

namespace isc {
namespace process {

const size_t BaseCfgMgr::CONFIG_LIST_SIZE = 10;

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

};
};
