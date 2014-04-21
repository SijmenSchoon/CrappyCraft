#ifndef SC_LOGIN_DISCONNECT_H
#define SC_LOGIN_DISCONNECT_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCLoginDisconnectPacket : public Packet
        {
        public:
            SCLoginDisconnectPacket() : Packet(PacketType::SC_LOGIN_DISCONNECT) { };
            SCLoginDisconnectPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

