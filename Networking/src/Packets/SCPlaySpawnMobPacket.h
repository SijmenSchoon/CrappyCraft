
#ifndef SC_PLAY_SPAWN_MOB_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlaySpawnMobPacket : public Packet
        {
        public:
            SCPlaySpawnMobPacket() : Packet(PacketType::SC_PLAY_SPAWN_MOB) { };
            SCPlaySpawnMobPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

