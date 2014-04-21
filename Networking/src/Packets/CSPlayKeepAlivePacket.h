#ifndef CS_PLAY_KEEP_ALIVE_H
#define CS_PLAY_KEEP_ALIVE_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayKeepAlivePacket : public Packet
        {
        public:
            CSPlayKeepAlivePacket() : Packet(PacketType::CS_PLAY_KEEP_ALIVE) { };
            CSPlayKeepAlivePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

