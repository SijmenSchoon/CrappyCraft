
#ifndef SC_PLAY_STATISTICS_H
#define 

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

