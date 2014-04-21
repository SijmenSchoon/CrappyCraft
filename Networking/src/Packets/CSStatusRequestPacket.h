#ifndef CS_STATUS_REQUEST_H
#define CS_STATUS_REQUEST_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSStatusRequestPacket : public Packet
        {
        public:
            CSStatusRequestPacket() : Packet(PacketType::CS_STATUS_REQUEST) { };
            CSStatusRequestPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

