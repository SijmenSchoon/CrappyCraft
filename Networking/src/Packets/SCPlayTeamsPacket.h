#ifndef SC_PLAY_TEAMS_H
#define SC_PLAY_TEAMS_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayTeamsPacket : public Packet
        {
        public:
            SCPlayTeamsPacket() : Packet(PacketType::SC_PLAY_TEAMS) { };
            SCPlayTeamsPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

