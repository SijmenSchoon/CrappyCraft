#ifndef SC_PLAY_TIME_UPDATE_H
#define SC_PLAY_TIME_UPDATE_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayTimeUpdatePacket : public Packet
        {
        public:
            SCPlayTimeUpdatePacket() : Packet(PacketType::SC_PLAY_TIME_UPDATE) { };
            SCPlayTimeUpdatePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

