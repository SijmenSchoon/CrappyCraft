#ifndef SC_PLAY_JOIN_GAME_H
#define SC_PLAY_JOIN_GAME_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayJoinGamePacket : public Packet
        {
        public:
            SCPlayJoinGamePacket() : Packet(PacketType::SC_PLAY_JOIN_GAME) { };
            SCPlayJoinGamePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

