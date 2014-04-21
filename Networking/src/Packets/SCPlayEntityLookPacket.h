
#ifndef SC_PLAY_ENTITY_LOOK_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayEntityLookPacket : public Packet
        {
        public:
            SCPlayEntityLookPacket() : Packet(PacketType::SC_PLAY_ENTITY_LOOK) { };
            SCPlayEntityLookPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

