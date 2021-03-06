#ifndef CS_PLAY_ENTITY_ACTION_H
#define CS_PLAY_ENTITY_ACTION_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayEntityActionPacket : public Packet
        {
        public:
            CSPlayEntityActionPacket() : Packet(PacketType::CS_PLAY_ENTITY_ACTION) { };
            CSPlayEntityActionPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

