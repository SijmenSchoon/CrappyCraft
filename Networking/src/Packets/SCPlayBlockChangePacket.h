#ifndef SC_PLAY_BLOCK_CHANGE_H
#define SC_PLAY_BLOCK_CHANGE_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent by the server when a single block is to be updated to the client.
        /// </summary>
        class SCPlayBlockChangePacket : public Packet
        {
        public:
            SCPlayBlockChangePacket() : Packet(PacketType::SC_PLAY_BLOCK_CHANGE) { };
            SCPlayBlockChangePacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The block's X coordinate.
            /// </summary>
            int32_t mX;

            /// <summary>
            ///     The block's Y coordinate.
            /// </summary>
            uint8_t mY;

            /// <summary>
            ///     The block's Z coordinate.
            /// </summary>
            int32_t mZ;

            /// <summary>
            ///     The new block ID for the block.
            /// </summary>
            VarInt mBlockID;

            /// <summary>
            ///     The new metadata for the block.
            /// </summary>
            uint8_t mBlockMetadata;
        };
    }
}

#endif

