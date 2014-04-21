
#ifndef SC_PLAY_REMOVE_ENTITY_EFFECT_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayRemoveEntityEffectPacket : public Packet
        {
        public:
            SCPlayRemoveEntityEffectPacket() : Packet(PacketType::SC_PLAY_REMOVE_ENTITY_EFFECT) { };
            SCPlayRemoveEntityEffectPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

