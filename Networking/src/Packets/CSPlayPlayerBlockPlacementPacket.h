
#ifndef CS_PLAY_PLAYER_BLOCK_PLACEMENT_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayPlayerBlockPlacementPacket : public Packet
        {
        public:
            CSPlayPlayerBlockPlacementPacket() : Packet(PacketType::CS_PLAY_PLAYER_BLOCK_PLACEMENT) { };
            CSPlayPlayerBlockPlacementPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

