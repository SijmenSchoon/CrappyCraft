#ifndef SC_PLAY_CLOSE_WINDOW_H
#define SC_PLAY_CLOSE_WINDOW_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayCloseWindowPacket : public Packet
        {
        public:
            SCPlayCloseWindowPacket() : Packet(PacketType::SC_PLAY_CLOSE_WINDOW) { };
            SCPlayCloseWindowPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

