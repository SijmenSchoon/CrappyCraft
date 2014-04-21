#ifndef CS_PLAY_PLAYER_POSITION_AND_LOOK_H
#define CS_PLAY_PLAYER_POSITION_AND_LOOK_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayPlayerPositionAndLookPacket : public Packet
        {
        public:
            CSPlayPlayerPositionAndLookPacket() : Packet(PacketType::CS_PLAY_PLAYER_POSITION_AND_LOOK) { };
            CSPlayPlayerPositionAndLookPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

