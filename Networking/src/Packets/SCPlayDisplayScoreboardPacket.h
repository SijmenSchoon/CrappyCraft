#ifndef SC_PLAY_DISPLAY_SCOREBOARD_H
#define SC_PLAY_DISPLAY_SCOREBOARD_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayDisplayScoreboardPacket : public Packet
        {
        public:
            SCPlayDisplayScoreboardPacket() : Packet(PacketType::SC_PLAY_DISPLAY_SCOREBOARD) { };
            SCPlayDisplayScoreboardPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

