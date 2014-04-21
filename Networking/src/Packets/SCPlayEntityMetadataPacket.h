#ifndef SC_PLAY_ENTITY_METADATA_H
#define SC_PLAY_ENTITY_METADATA_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayEntityMetadataPacket : public Packet
        {
        public:
            SCPlayEntityMetadataPacket() : Packet(PacketType::SC_PLAY_ENTITY_METADATA) { };
            SCPlayEntityMetadataPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

