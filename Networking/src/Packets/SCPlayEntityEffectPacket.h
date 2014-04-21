
#ifndef SC_PLAY_ENTITY_EFFECT_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayEntityEffectPacket : public Packet
        {
        public:
            SCPlayEntityEffectPacket() : Packet(PacketType::SC_PLAY_ENTITY_EFFECT) { };
            SCPlayEntityEffectPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

