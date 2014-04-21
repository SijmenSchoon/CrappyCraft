#ifndef CS_HANDSHAKE_H
#define CS_HANDSHAKE_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSHandshakePacket : public Packet
        {
        public:
            CSHandshakePacket() : Packet(PacketType::CS_HANDSHAKE) { };
            CSHandshakePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

