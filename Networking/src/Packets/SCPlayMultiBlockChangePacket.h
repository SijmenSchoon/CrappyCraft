
#ifndef SC_PLAY_MULTI_BLOCK_CHANGE_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayMultiBlockChangePacket : public Packet
        {
        public:
            SCPlayMultiBlockChangePacket() : Packet(PacketType::SC_PLAY_MULTI_BLOCK_CHANGE) { };
            SCPlayMultiBlockChangePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

