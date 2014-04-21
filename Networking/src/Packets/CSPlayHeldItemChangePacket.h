
#ifndef CS_PLAY_HELD_ITEM_CHANGE_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayHeldItemChangePacket : public Packet
        {
        public:
            CSPlayHeldItemChangePacket() : Packet(PacketType::CS_PLAY_HELD_ITEM_CHANGE) { };
            CSPlayHeldItemChangePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

