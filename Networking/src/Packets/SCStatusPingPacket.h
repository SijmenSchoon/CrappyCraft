#ifndef SC_STATUS_PING_H
#define SC_STATUS_PING_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCStatusPingPacket : public Packet
        {
        public:
            SCStatusPingPacket() : Packet(PacketType::SC_STATUS_PING) { };
            SCStatusPingPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

