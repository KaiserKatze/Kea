
#include <dhcpsrv/base_config.h>
#include <log/logger_manager.h>
#include <log/logger_specification.h>
#include <list>

using namespace isc::log;
using namespace isc::dhcp;

namespace isc {
namespace process {

void
BaseConfig::applyLoggingCfg() const {

    std::list<LoggerSpecification> specs;
    for (LoggingInfoStorage::const_iterator it = logging_info_.begin();
         it != logging_info_.end(); ++it) {
        specs.push_back(it->toSpec());
    }
    LoggerManager manager;
    manager.process(specs.begin(), specs.end());
}

}
}
