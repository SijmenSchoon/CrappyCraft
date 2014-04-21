
#ifndef SC_PLAY_ENTITY_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayEntityPacket : public Packet
        {
        public:
            SCPlayEntityPacket() : Packet(PacketType::SC_PLAY_ENTITY) { };
            SCPlayEntityPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

