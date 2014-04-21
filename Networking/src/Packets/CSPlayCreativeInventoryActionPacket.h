#ifndef CS_PLAY_CREATIVE_INVENTORY_ACTION_H
#define CS_PLAY_CREATIVE_INVENTORY_ACTION_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayCreativeInventoryActionPacket : public Packet
        {
        public:
            CSPlayCreativeInventoryActionPacket() : Packet(PacketType::CS_PLAY_CREATIVE_INVENTORY_ACTION) { };
            CSPlayCreativeInventoryActionPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

