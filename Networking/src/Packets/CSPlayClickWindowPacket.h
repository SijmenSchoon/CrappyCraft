#ifndef CS_PLAY_CLICK_WINDOW_H
#define CS_PLAY_CLICK_WINDOW_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayClickWindowPacket : public Packet
        {
        public:
            CSPlayClickWindowPacket() : Packet(PacketType::CS_PLAY_CLICK_WINDOW) { };
            CSPlayClickWindowPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

