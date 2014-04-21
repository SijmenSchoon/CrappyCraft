
#ifndef CS_PLAY_PLAYER_LOOK_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayPlayerLookPacket : public Packet
        {
        public:
            CSPlayPlayerLookPacket() : Packet(PacketType::CS_PLAY_PLAYER_LOOK) { };
            CSPlayPlayerLookPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

