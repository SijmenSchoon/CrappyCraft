
#ifndef SC_PLAY_KEEP_ALIVE_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayKeepAlivePacket : public Packet
        {
        public:
            SCPlayKeepAlivePacket() : Packet(PacketType::SC_PLAY_KEEP_ALIVE) { };
            SCPlayKeepAlivePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

