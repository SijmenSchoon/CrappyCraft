
#ifndef SC_PLAY_ENTITY_HEAD_LOOK_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayEntityHeadLookPacket : public Packet
        {
        public:
            SCPlayEntityHeadLookPacket() : Packet(PacketType::SC_PLAY_ENTITY_HEAD_LOOK) { };
            SCPlayEntityHeadLookPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

