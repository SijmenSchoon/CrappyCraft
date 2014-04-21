
#ifndef SC_PLAY_COLLECT_ITEM_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayCollectItemPacket : public Packet
        {
        public:
            SCPlayCollectItemPacket() : Packet(PacketType::SC_PLAY_COLLECT_ITEM) { };
            SCPlayCollectItemPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

