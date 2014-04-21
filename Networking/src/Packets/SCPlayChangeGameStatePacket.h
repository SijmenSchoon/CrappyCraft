#ifndef SC_PLAY_CHANGE_GAME_STATE_H
#define SC_PLAY_CHANGE_GAME_STATE_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayChangeGameStatePacket : public Packet
        {
        public:
            SCPlayChangeGameStatePacket() : Packet(PacketType::SC_PLAY_CHANGE_GAME_STATE) { };
            SCPlayChangeGameStatePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

