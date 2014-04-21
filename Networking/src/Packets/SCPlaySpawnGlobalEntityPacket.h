#ifndef SC_PLAY_SPAWN_GLOBAL_ENTITY_H
#define SC_PLAY_SPAWN_GLOBAL_ENTITY_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlaySpawnGlobalEntityPacket : public Packet
        {
        public:
            SCPlaySpawnGlobalEntityPacket() : Packet(PacketType::SC_PLAY_SPAWN_GLOBAL_ENTITY) { };
            SCPlaySpawnGlobalEntityPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

