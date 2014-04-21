
#ifndef CS_PLAY_ENCHANT_ITEM_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayEnchantItemPacket : public Packet
        {
        public:
            CSPlayEnchantItemPacket() : Packet(PacketType::CS_PLAY_ENCHANT_ITEM) { };
            CSPlayEnchantItemPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

