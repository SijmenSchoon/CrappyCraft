#ifndef CS_PLAY_CLOSE_WINDOW_H
#define CS_PLAY_CLOSE_WINDOW_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayCloseWindowPacket : public Packet
        {
        public:
            CSPlayCloseWindowPacket() : Packet(PacketType::CS_PLAY_CLOSE_WINDOW) { };
            CSPlayCloseWindowPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

