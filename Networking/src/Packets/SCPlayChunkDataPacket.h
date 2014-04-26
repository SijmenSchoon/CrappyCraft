#ifndef SC_PLAY_CHUNK_DATA_H
#define SC_PLAY_CHUNK_DATA_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///   Sent whenever there is new chunk data to be loaded by the client.
        ///   <para>
        ///     The client does not unload chunks automatically. To unload chunks, the server must
        ///     send this packet with mGroundUpContinuous == true and no chunk data.
        ///   </para>
        ///   <para>
        ///     The server does not send skylight information for nether chunks, the client is
        ///     expected to be aware whether the player is in the nether.
        ///   </para>
        /// </summary>
        class SCPlayChunkDataPacket : public Packet
        {
        public:
            SCPlayChunkDataPacket() : Packet(PacketType::SC_PLAY_CHUNK_DATA) { };
            SCPlayChunkDataPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The X coordinate of the chunk.
            /// </summary>
            int32_t mChunkX;

            /// <summary>
            ///     The Z coordinate of the chunk.
            /// </summary>
            int32_t mChunkZ;

            /// <summary>
            ///     Set to true if the packet represents all sections in this vertical column.
            /// </summary>
            bool mGroundUpContinuous;

            /// <summary>
            ///   Bitmask, in which every set bit indicates a chunk sent in the compressed data.
            ///   Used for block type, block metadata, block light and sky light arrays.
            ///   <para>
            ///     If mGroundUpContinuous is set to true, a reset bit means that the matching chunk
            ///     is fully air. Else, if it is set to false, a reset bit means that the chunk
            ///     simply hasn't changed.
            ///   </para>
            /// </summary>
            uint16_t mPrimaryBitMap;

            /// <summary>
            ///     Bitmask, in which every set bit indicates a chunk sent in the compressed data.
            ///     Used for the add array.
            /// </summary>
            uint16_t mAddBitMap;

            /// <summary>
            ///     Size of the compressed chunk data.
            /// </summary>
            int32_t mSize;

            /// <summary>
            ///     Chunk data, compressed using Zlib Deflate.
            /// </summary>
            std::vector<int8_t> mData;
        };
    }
}

#endif

