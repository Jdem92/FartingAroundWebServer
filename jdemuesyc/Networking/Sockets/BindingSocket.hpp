//
// 
//  jdemuesyc Home C++ Library
//  BindingSocket.hpp
//

#ifndef BindingSocket_hpp
#define BindingSocket_hpp

#include <stdio.h>
#include "SimpleSocket.hpp"

namespace JDC
{
    class BindingSocket: public SimpleSocket
    {
        public:
            BindingSocket(int domain, int service, int protocol, int port, u_long interFace);
            
            // virtual function from parent
            int connect_to_network(int sock, struct sockaddr_in address);
    };
}


#endif