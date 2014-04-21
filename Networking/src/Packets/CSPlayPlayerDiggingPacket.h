
#ifndef CS_PLAY_PLAYER_DIGGING_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayPlayerDiggingPacket : public Packet
        {
        public:
            CSPlayPlayerDiggingPacket() : Packet(PacketType::CS_PLAY_PLAYER_DIGGING) { };
            CSPlayPlayerDiggingPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

