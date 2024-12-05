//
// 
//  jdemuesyc Home C++ Library
//  ListeningSocket.hpp
//

#ifndef ListeningSocket_hpp
#define ListeningSocket_hpp

#include "BindingSocket.hpp"

namespace JDC
{
    class ListeningSocket : public BindingSocket
    {
        private:
            int backlog;
            int listening;
        public:
            ListeningSocket(int domain, int service, int protocol, int port, u_long interFace, int bklg);
            void start_listening();
    };
}



#endif