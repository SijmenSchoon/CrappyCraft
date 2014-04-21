#ifndef CS_LOGIN_ENCRYPTION_RESPONSE_H
#define CS_LOGIN_ENCRYPTION_RESPONSE_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSLoginEncryptionResponsePacket : public Packet
        {
        public:
            CSLoginEncryptionResponsePacket() : Packet(PacketType::CS_LOGIN_ENCRYPTION_RESPONSE) { };
            CSLoginEncryptionResponsePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

