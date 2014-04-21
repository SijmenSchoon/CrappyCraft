
#ifndef SC_PLAY_SPAWN_POSITION_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlaySpawnPositionPacket : public Packet
        {
        public:
            SCPlaySpawnPositionPacket() : Packet(PacketType::SC_PLAY_SPAWN_POSITION) { };
            SCPlaySpawnPositionPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

