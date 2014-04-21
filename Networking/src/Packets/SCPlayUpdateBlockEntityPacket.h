#ifndef SC_PLAY_UPDATE_BLOCK_ENTITY_H
#define SC_PLAY_UPDATE_BLOCK_ENTITY_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayUpdateBlockEntityPacket : public Packet
        {
        public:
            SCPlayUpdateBlockEntityPacket() : Packet(PacketType::SC_PLAY_UPDATE_BLOCK_ENTITY) { };
            SCPlayUpdateBlockEntityPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

