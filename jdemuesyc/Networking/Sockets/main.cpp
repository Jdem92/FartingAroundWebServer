
#include "ListeningSocket.hpp"
//#include "stdio.h"

int main()
{
    std::cout << "Starting..." << std::endl;
    std::cout << "Binding Socket..." << std::endl;

    JDC::BindingSocket bs = JDC::BindingSocket(AF_INET, SOCK_STREAM, 0, 81, INADDR_ANY);

    std::cout << "Listening Socket..." << std::endl;
    // JDC::ListeningSocket ls = JDC::ListeningSocket(AF_INET, SOCK_STREAM, 0, 80, INADDR_ANY, 10);
}