//
//
//  jdemuesyc Home C++ Library
//  ListeningSocket.cpp
//


#include "ListeningSocket.hpp"

JDC::ListeningSocket::ListeningSocket(int domain, int service, int protocol, int port, u_long interFace, int bklg) : BindingSocket(domain, service, protocol, port, interFace)
{
    backlog = bklg;
    start_listening();
    test_connection(listening);
}

void JDC::ListeningSocket::start_listening() 
{
    listening = listen(get_connection(), backlog);
}