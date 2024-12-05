//
//
//  jdemuesyc Home C++ Library
//  SimpleSocket.cpp
//

#include "SimpleSocket.hpp"

JDC::SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, u_long interFace)
{
    // Address structure
    address.sin_family = domain;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(interFace);
    
    // Establish the socket
    sock = socket(domain, service, protocol);
    test_connection(sock);
}

//Test connection virtual function
void JDC::SimpleSocket::test_connection(int item_to_test)
{
    // confirms socket/connection has been established
    if(item_to_test < 0)
    {
        std::cout << item_to_test << std::endl;;
        perror("Failed to connect...");
        exit(EXIT_FAILURE);
    }
}

//Getter Functions
struct sockaddr_in JDC::SimpleSocket::get_address()
{
    return address;
}

int JDC::SimpleSocket::get_sock()
{
    return sock;
}

int JDC::SimpleSocket::get_connection()
{
    return connection;
}

//Setter Functions
void JDC::SimpleSocket::set_connection(int conn)
{
    connection = conn;
}
