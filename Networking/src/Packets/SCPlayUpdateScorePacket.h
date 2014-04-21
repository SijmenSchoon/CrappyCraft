#ifndef SC_PLAY_UPDATE_SCORE_H
#define SC_PLAY_UPDATE_SCORE_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayUpdateScorePacket : public Packet
        {
        public:
            SCPlayUpdateScorePacket() : Packet(PacketType::SC_PLAY_UPDATE_SCORE) { };
            SCPlayUpdateScorePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

