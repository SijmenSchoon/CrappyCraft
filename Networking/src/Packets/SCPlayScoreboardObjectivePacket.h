
#ifndef SC_PLAY_SCOREBOARD_OBJECTIVE_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayScoreboardObjectivePacket : public Packet
        {
        public:
            SCPlayScoreboardObjectivePacket() : Packet(PacketType::SC_PLAY_SCOREBOARD_OBJECTIVE) { };
            SCPlayScoreboardObjectivePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

