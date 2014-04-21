
#ifndef SC_PLAY_CHUNK_DATA_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayChunkDataPacket : public Packet
        {
        public:
            SCPlayChunkDataPacket() : Packet(PacketType::SC_PLAY_CHUNK_DATA) { };
            SCPlayChunkDataPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

