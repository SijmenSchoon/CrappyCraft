#ifndef CS_PLAY_USE_ENTITY_H
#define CS_PLAY_USE_ENTITY_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayUseEntityPacket : public Packet
        {
        public:
            CSPlayUseEntityPacket() : Packet(PacketType::CS_PLAY_USE_ENTITY) { };
            CSPlayUseEntityPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

