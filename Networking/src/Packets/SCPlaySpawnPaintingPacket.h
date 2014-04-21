#ifndef SC_PLAY_SPAWN_PAINTING_H
#define SC_PLAY_SPAWN_PAINTING_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlaySpawnPaintingPacket : public Packet
        {
        public:
            SCPlaySpawnPaintingPacket() : Packet(PacketType::SC_PLAY_SPAWN_PAINTING) { };
            SCPlaySpawnPaintingPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

