#ifndef SC_PLAY_RESPAWN_H
#define SC_PLAY_RESPAWN_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayRespawnPacket : public Packet
        {
        public:
            SCPlayRespawnPacket() : Packet(PacketType::SC_PLAY_RESPAWN) { };
            SCPlayRespawnPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

