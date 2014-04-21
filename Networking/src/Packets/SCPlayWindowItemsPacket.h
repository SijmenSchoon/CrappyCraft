
#ifndef SC_PLAY_WINDOW_ITEMS_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayWindowItemsPacket : public Packet
        {
        public:
            SCPlayWindowItemsPacket() : Packet(PacketType::SC_PLAY_WINDOW_ITEMS) { };
            SCPlayWindowItemsPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

