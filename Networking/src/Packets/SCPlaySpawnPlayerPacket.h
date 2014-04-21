
#ifndef SC_PLAY_SPAWN_PLAYER_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlaySpawnPlayerPacket : public Packet
        {
        public:
            SCPlaySpawnPlayerPacket() : Packet(PacketType::SC_PLAY_SPAWN_PLAYER) { };
            SCPlaySpawnPlayerPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

