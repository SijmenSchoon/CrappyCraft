
#ifndef SC_PLAY_BLOCK_BREAK_ANIMATION_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayBlockBreakAnimationPacket : public Packet
        {
        public:
            SCPlayBlockBreakAnimationPacket() : Packet(PacketType::SC_PLAY_BLOCK_BREAK_ANIMATION) { };
            SCPlayBlockBreakAnimationPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

