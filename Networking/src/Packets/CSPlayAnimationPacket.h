#ifndef CS_PLAY_ANIMATION_H
#define CS_PLAY_ANIMATION_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayAnimationPacket : public Packet
        {
        public:
            CSPlayAnimationPacket() : Packet(PacketType::CS_PLAY_ANIMATION) { };
            CSPlayAnimationPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

