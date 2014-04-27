#ifndef SC_PLAY_MAP_CHUNK_BULK_H
#define SC_PLAY_MAP_CHUNK_BULK_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Contains multiple chunks in one packet for better compression results.
        /// </summary>
        class SCPlayMapChunkBulkPacket : public Packet
        {
        public:
            SCPlayMapChunkBulkPacket() : Packet(PacketType::SC_PLAY_MAP_CHUNK_BULK) { };
            SCPlayMapChunkBulkPacket(boost::asio::streambuf buffer);

            struct Meta
            {
                /// <summary>
                ///     The chunk's X coordinate.
                /// </summary>
                int32_t mChunkX;

                /// <summary>
                ///     The chunk's Z coordinate.
                /// </summary>
                int32_t mChunkZ;

                /// <summary>
                ///     Bitmap specifying which sections are not air in the chunk.
                /// </summary>
                uint16_t mPrimaryBitmap;

                /// <summary>
                ///     Bitmap specifying which sections need add information.
                /// </summary>
                uint16_t mAddBitmap;
            };

            /// <summary>
            ///     The number of chunks sent.
            /// </summary>
            int16_t mColumnCount;

            /// <summary>
            ///     The size of the compressed data.
            /// </summary>
            int32_t mDataLength;

            /// <summary>
            ///     Whether or not the chunk data contains an array with skylight values. This will
            ///     only be true in the main world, and false in the end and nether.
            /// </summary>
            bool mSkyLightSent;

            /// <summary>
            ///     The compressed chunk data.
            /// </summary>
            std::vector<int8_t> mData;

            /// <summary>
            ///     Meta information for each chunk.
            /// </summary>
            std::vector<Meta> mMetaInfo;
        };
    }
}

#endif

