
#ifndef CS_PLAY_PLAYER_POSITION_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayPlayerPositionPacket : public Packet
        {
        public:
            CSPlayPlayerPositionPacket() : Packet(PacketType::CS_PLAY_PLAYER_POSITION) { };
            CSPlayPlayerPositionPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

