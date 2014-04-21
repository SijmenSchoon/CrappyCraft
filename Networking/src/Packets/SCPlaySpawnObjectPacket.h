
#ifndef SC_PLAY_SPAWN_OBJECT_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlaySpawnObjectPacket : public Packet
        {
        public:
            SCPlaySpawnObjectPacket() : Packet(PacketType::SC_PLAY_SPAWN_OBJECT) { };
            SCPlaySpawnObjectPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

