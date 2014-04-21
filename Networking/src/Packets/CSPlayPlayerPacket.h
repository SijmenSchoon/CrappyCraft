
#ifndef CS_PLAY_PLAYER_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayPlayerPacket : public Packet
        {
        public:
            CSPlayPlayerPacket() : Packet(PacketType::CS_PLAY_PLAYER) { };
            CSPlayPlayerPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

