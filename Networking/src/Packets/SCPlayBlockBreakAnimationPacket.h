#ifndef SC_PLAY_BLOCK_BREAK_ANIMATION_H
#define SC_PLAY_BLOCK_BREAK_ANIMATION_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent when a block is in the process of being broken. It can be any block, including
        ///     air.
        /// </summary>
        class SCPlayBlockBreakAnimationPacket : public Packet
        {
        public:
            SCPlayBlockBreakAnimationPacket() : Packet(PacketType::SC_PLAY_BLOCK_BREAK_ANIMATION) { };
            SCPlayBlockBreakAnimationPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The entity ID of the entity breaking the block.
            /// </summary>
            VarInt mEntityID;

            /// <summary>
            ///     The block's X coordinate.
            /// </summary>
            int32_t mX;

            /// <summary>
            ///     The block's Y coordinate.
            /// </summary>
            int32_t mY;

            /// <summary>
            ///     The block's Z coordinate.
            /// </summary>
            int32_t mZ;

            /// <summary>
            ///     The animation frame, from 0 to 9 (10 frames in total).
            /// </summary>
            int8_t mDestroyChange;
        };
    }
}

#endif

