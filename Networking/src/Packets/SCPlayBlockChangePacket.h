#ifndef SC_PLAY_BLOCK_CHANGE_H
#define SC_PLAY_BLOCK_CHANGE_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayBlockChangePacket : public Packet
        {
        public:
            SCPlayBlockChangePacket() : Packet(PacketType::SC_PLAY_BLOCK_CHANGE) { };
            SCPlayBlockChangePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

