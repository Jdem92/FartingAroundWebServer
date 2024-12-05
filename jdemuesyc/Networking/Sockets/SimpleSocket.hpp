//
//
//  jdemuesyc Home C++ Library
//  SimpleSocket.hpp
//

#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

#include <stdio.h>
#include <winsock.h>
//#include <winsock2.h>
#include <iostream>

namespace JDC
{
    class SimpleSocket
    {
        private:
            struct sockaddr_in address;
            int sock;
            int connection;
        public:
            //Constructor
            SimpleSocket(int domain, int service, int protocol, int port, u_long interFace);
            
            //Function to connect to a network
            virtual int connect_to_network(int sock, struct sockaddr_in address) = 0;
            
            //Function to test sockets/connections
            void test_connection(int sock);
            
            //Getter Functions
            struct sockaddr_in get_address();
            int get_sock();
            int get_connection();

            //Setter Functions
            void set_connection(int conn);
    };
}

#endif // SimpleSocket.hpp //