#ifndef SC_PLAY_ENTITY_STATUS_H
#define SC_PLAY_ENTITY_STATUS_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayEntityStatusPacket : public Packet
        {
        public:
            SCPlayEntityStatusPacket() : Packet(PacketType::SC_PLAY_ENTITY_STATUS) { };
            SCPlayEntityStatusPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

