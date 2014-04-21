
#ifndef CS_STATUS_PING_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSStatusPingPacket : public Packet
        {
        public:
            CSStatusPingPacket() : Packet(PacketType::CS_STATUS_PING) { };
            CSStatusPingPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

