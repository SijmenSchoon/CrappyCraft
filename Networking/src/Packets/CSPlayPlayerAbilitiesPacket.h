#ifndef CS_PLAY_PLAYER_ABILITIES_H
#define CS_PLAY_PLAYER_ABILITIES_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayPlayerAbilitiesPacket : public Packet
        {
        public:
            CSPlayPlayerAbilitiesPacket() : Packet(PacketType::CS_PLAY_PLAYER_ABILITIES) { };
            CSPlayPlayerAbilitiesPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

