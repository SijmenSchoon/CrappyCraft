
#ifndef SC_PLAY_PLAYER_POSITION_AND_LOOK_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayPlayerPositionAndLookPacket : public Packet
        {
        public:
            SCPlayPlayerPositionAndLookPacket() : Packet(PacketType::SC_PLAY_PLAYER_POSITION_AND_LOOK) { };
            SCPlayPlayerPositionAndLookPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

