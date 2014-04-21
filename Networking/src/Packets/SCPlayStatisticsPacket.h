#ifndef SC_PLAY_STATISTICS_H
#define SC_PLAY_STATISTICS_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayStatisticsPacket : public Packet
        {
        public:
            SCPlayStatisticsPacket() : Packet(PacketType::SC_PLAY_STATISTICS) { };
            SCPlayStatisticsPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

