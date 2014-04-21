#ifndef SC_PLAY_WINDOW_PROPERTY_H
#define SC_PLAY_WINDOW_PROPERTY_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayWindowPropertyPacket : public Packet
        {
        public:
            SCPlayWindowPropertyPacket() : Packet(PacketType::SC_PLAY_WINDOW_PROPERTY) { };
            SCPlayWindowPropertyPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

