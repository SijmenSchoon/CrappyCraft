#ifndef SC_PLAY_MULTI_BLOCK_CHANGE_H
#define SC_PLAY_MULTI_BLOCK_CHANGE_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent by the server when multiple blocks have to be updated to the client.
        /// </summary>
        class SCPlayMultiBlockChangePacket : public Packet
        {
        public:
            SCPlayMultiBlockChangePacket() : Packet(PacketType::SC_PLAY_MULTI_BLOCK_CHANGE) { };
            SCPlayMultiBlockChangePacket(boost::asio::streambuf buffer);

            struct Record
            {
                /// <summary>
                ///     Get the block metadata (4 bits).
                /// </summary>
                uint8_t BlockMetadata() { return mData & 0x0000000F };

                /// <summary>
                ///     Get the block ID (12 bits).
                /// </summary>
                uint16_t BlockID() { return (mData & 0x0000FFF0) >> 4; };

                /// <summary>
                ///     Get the block's Y coordinate.
                /// </summary>
                uint8_t YCoordinate() { return (mData & 0x00FF0000) >> 16; };

                /// <summary>
                ///     Get the block's Z coordinate, relative to the chunk it's in.
                /// </summary>
                uint8_t ZCoordinate() { return (mData & 0x0F000000) >> 24; };

                /// <summary>
                ///     Get the block's X coordinate, relative to the chunk it's in.
                /// </summary>
                uint8_t XCoordinate() { return (mData & 0xF0000000) >> 28; };


                uint32_t mData;
            };

            /// <summary>
            ///     The chunk's X coordinate.
            /// </summary>
            int32_t mChunkX;

            /// <summary>
            ///     The chunk's Z coordinate.
            /// </summary>
            int32_t mChunkZ;

            /// <summary>
            ///     The number of blocks affected.
            /// </summary>
            int16_t mRecordCount;

            /// <summary>
            ///     Total size of the data, in bytes. Should always be mRecordCount times four.
            /// </summary>
            int32_t mDataSize;

            /// <summary>
            ///     The array of changed blocks.
            /// </summary>
            std::vector<Record> mRecords;
        };
    }
}

#endif

