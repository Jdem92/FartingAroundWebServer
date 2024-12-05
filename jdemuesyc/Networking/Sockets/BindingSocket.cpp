//
//
//  jdemuesyc Home C++ Library
//  BindingSocket.cpp
//

#include "BindingSocket.hpp"

// Constructor
JDC::BindingSocket::BindingSocket(int domain, int service, int protocol, int port, u_long interFace): SimpleSocket(domain, service, protocol, port, interFace)
{
    set_connection(connect_to_network(get_sock(), get_address()));
    test_connection(get_connection());
}

// Definition of connect_to_network function
int JDC::BindingSocket::connect_to_network(int sock, struct sockaddr_in address)
{
    return bind(sock, (struct sockaddr *)&address, sizeof(address));
}