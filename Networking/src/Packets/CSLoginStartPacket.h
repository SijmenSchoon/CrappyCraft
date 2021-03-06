#ifndef CS_LOGIN_START_H
#define CS_LOGIN_START_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSLoginStartPacket : public Packet
        {
        public:
            CSLoginStartPacket() : Packet(PacketType::CS_LOGIN_START) { };
            CSLoginStartPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

