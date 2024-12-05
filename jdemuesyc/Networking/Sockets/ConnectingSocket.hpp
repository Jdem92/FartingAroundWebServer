//
//
//  jdemuesyc Home C++ Library
//  ConnectingSocket.hpp
//

#ifndef ConnectingSocket_hpp
#define ConnectingSocket_hpp

#include <stdio.h>
#include "SimpleSocket.hpp"

namespace JDC
{
    class ConnectingSocket: public SimpleSocket
    {
        public:
            ConnectingSocket(int domain, int service, int protocol, int port, u_long interFace)
                : SimpleSocket(domain, service, protocol, port, interFace){};
            
            // virtual function from parent
            int connect_to_network(int sock, struct sockaddr_in address);
    };
}

#endif