#ifndef SC_PLAY_CHUNK_DATA_H
#define SC_PLAY_CHUNK_DATA_H

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

