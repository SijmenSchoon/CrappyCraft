#ifndef SC_PLAY_BLOCK_ACTION_H
#define SC_PLAY_BLOCK_ACTION_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent by the server when a block action has occurred, such as chests opening or
        ///     closing.
        /// </summary>
        class SCPlayBlockActionPacket : public Packet
        {
        public:
            SCPlayBlockActionPacket() : Packet(PacketType::SC_PLAY_BLOCK_ACTION) { };
            SCPlayBlockActionPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The block's X coordinate.
            /// </summary>
            int32_t mX;

            /// <summary>
            ///     The block's Y coordinate.
            /// </summary>
            int16_t mY;

            /// <summary>
            ///     The block's Z coordinate.
            /// </summary>
            int32_t mZ;

            /// <summary>
            ///     The data of the action.
            /// </summary>
            uint8_t mData[2];

            /// <summary>
            ///     The block type.
            /// </summary>
            VarInt mBlockType;
        };
    }
}

#endif

