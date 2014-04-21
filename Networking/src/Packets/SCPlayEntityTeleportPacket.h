
#ifndef SC_PLAY_ENTITY_TELEPORT_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayEntityTeleportPacket : public Packet
        {
        public:
            SCPlayEntityTeleportPacket() : Packet(PacketType::SC_PLAY_ENTITY_TELEPORT) { };
            SCPlayEntityTeleportPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

