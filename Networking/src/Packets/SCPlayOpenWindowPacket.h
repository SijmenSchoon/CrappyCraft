#ifndef SC_PLAY_OPEN_WINDOW_H
#define SC_PLAY_OPEN_WINDOW_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayOpenWindowPacket : public Packet
        {
        public:
            SCPlayOpenWindowPacket() : Packet(PacketType::SC_PLAY_OPEN_WINDOW) { };
            SCPlayOpenWindowPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

