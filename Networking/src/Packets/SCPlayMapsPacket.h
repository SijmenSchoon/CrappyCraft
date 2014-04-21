
#ifndef SC_PLAY_MAPS_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayMapsPacket : public Packet
        {
        public:
            SCPlayMapsPacket() : Packet(PacketType::SC_PLAY_MAPS) { };
            SCPlayMapsPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

