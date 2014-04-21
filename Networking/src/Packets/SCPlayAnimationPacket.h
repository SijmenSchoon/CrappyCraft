#ifndef SC_PLAY_ANIMATION_H
#define SC_PLAY_ANIMATION_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayAnimationPacket : public Packet
        {
        public:
            SCPlayAnimationPacket() : Packet(PacketType::SC_PLAY_ANIMATION) { };
            SCPlayAnimationPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

