
#ifndef SC_PLAY_HELD_ITEM_CHANGE_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayHeldItemChangePacket : public Packet
        {
        public:
            SCPlayHeldItemChangePacket() : Packet(PacketType::SC_PLAY_HELD_ITEM_CHANGE) { };
            SCPlayHeldItemChangePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

