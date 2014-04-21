#ifndef SC_PLAY_DESTROY_ENTITIES_H
#define SC_PLAY_DESTROY_ENTITIES_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayDestroyEntitiesPacket : public Packet
        {
        public:
            SCPlayDestroyEntitiesPacket() : Packet(PacketType::SC_PLAY_DESTROY_ENTITIES) { };
            SCPlayDestroyEntitiesPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

