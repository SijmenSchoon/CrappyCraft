
#ifndef SC_LOGIN_SUCCESS_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCLoginSuccessPacket : public Packet
        {
        public:
            SCLoginSuccessPacket() : Packet(PacketType::SC_LOGIN_SUCCESS) { };
            SCLoginSuccessPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

