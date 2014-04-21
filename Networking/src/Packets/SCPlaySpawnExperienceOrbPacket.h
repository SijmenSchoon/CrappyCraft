#ifndef SC_PLAY_SPAWN_EXPERIENCE_ORB_H
#define SC_PLAY_SPAWN_EXPERIENCE_ORB_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlaySpawnExperienceOrbPacket : public Packet
        {
        public:
            SCPlaySpawnExperienceOrbPacket() : Packet(PacketType::SC_PLAY_SPAWN_EXPERIENCE_ORB) { };
            SCPlaySpawnExperienceOrbPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

