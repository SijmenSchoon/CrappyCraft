
#ifndef SC_PLAY_MAP_CHUNK_BULK_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayMapChunkBulkPacket : public Packet
        {
        public:
            SCPlayMapChunkBulkPacket() : Packet(PacketType::SC_PLAY_MAP_CHUNK_BULK) { };
            SCPlayMapChunkBulkPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

