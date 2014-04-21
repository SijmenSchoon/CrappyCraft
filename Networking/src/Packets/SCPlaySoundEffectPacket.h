#ifndef SC_PLAY_SOUND_EFFECT_H
#define SC_PLAY_SOUND_EFFECT_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlaySoundEffectPacket : public Packet
        {
        public:
            SCPlaySoundEffectPacket() : Packet(PacketType::SC_PLAY_SOUND_EFFECT) { };
            SCPlaySoundEffectPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

