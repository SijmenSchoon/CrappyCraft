#ifndef SC_PLAY_PLAYER_ABILITIES_H
#define SC_PLAY_PLAYER_ABILITIES_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayPlayerAbilitiesPacket : public Packet
        {
        public:
            SCPlayPlayerAbilitiesPacket() : Packet(PacketType::SC_PLAY_PLAYER_ABILITIES) { };
            SCPlayPlayerAbilitiesPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

