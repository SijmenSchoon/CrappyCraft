#ifndef SC_PLAY_BLOCK_ACTION_H
#define SC_PLAY_BLOCK_ACTION_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayBlockActionPacket : public Packet
        {
        public:
            SCPlayBlockActionPacket() : Packet(PacketType::SC_PLAY_BLOCK_ACTION) { };
            SCPlayBlockActionPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

