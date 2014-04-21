
#ifndef SC_PLAY_UPDATE_HEALTH_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayUpdateHealthPacket : public Packet
        {
        public:
            SCPlayUpdateHealthPacket() : Packet(PacketType::SC_PLAY_UPDATE_HEALTH) { };
            SCPlayUpdateHealthPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

