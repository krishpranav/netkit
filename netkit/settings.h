//
//  settings.h
//  netkit
//
//  Created by KrisnaPranav on 08/05/22.
//

#ifndef settings_h
#define settings_h

#include <cstdlib>
#include <string>

#define CAPTURE_SEND    (0x01)
#define CAPTURE_RECV    (0x02)
#define CAPTURE_ALL    (CAPTURE_SEND|CAPTURE_RECV)

namespace netkit {
    namespace settings {
        extern size_t        REFRESH_SECS;
        extern int        CAPTURE_ASR;
        extern bool        ORDER_TOP;
        extern bool        FILTER_ZERO;
        extern bool        TCP_UDP_TRAFFIC;
        extern bool        NO_RESOLVE;
        extern std::string    ASYNC_LOG_FILE;
        extern size_t        LIMIT_HOSTS_ROWS;
    }

    int parse_args(int argc, char *argv[], const char *prog, const char *version);
}

#endif /* settings_h */
