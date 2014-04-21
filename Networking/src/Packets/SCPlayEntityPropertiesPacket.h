
#ifndef SC_PLAY_ENTITY_PROPERTIES_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayEntityPropertiesPacket : public Packet
        {
        public:
            SCPlayEntityPropertiesPacket() : Packet(PacketType::SC_PLAY_ENTITY_PROPERTIES) { };
            SCPlayEntityPropertiesPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

