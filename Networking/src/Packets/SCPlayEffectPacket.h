
#ifndef SC_PLAY_EFFECT_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayEffectPacket : public Packet
        {
        public:
            SCPlayEffectPacket() : Packet(PacketType::SC_PLAY_EFFECT) { };
            SCPlayEffectPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

