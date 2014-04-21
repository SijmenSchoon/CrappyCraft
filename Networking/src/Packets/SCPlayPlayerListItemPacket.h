
#ifndef SC_PLAY_PLAYER_LIST_ITEM_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayPlayerListItemPacket : public Packet
        {
        public:
            SCPlayPlayerListItemPacket() : Packet(PacketType::SC_PLAY_PLAYER_LIST_ITEM) { };
            SCPlayPlayerListItemPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

