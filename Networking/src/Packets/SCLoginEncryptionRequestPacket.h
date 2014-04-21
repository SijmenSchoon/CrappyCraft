
#ifndef SC_LOGIN_ENCRYPTION_REQUEST_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCLoginEncryptionRequestPacket : public Packet
        {
        public:
            SCLoginEncryptionRequestPacket() : Packet(PacketType::SC_LOGIN_ENCRYPTION_REQUEST) { };
            SCLoginEncryptionRequestPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

