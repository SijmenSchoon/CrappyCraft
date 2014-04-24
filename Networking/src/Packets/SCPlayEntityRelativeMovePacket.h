#ifndef SC_PLAY_ENTITY_RELATIVE_MOVE_H
#define SC_PLAY_ENTITY_RELATIVE_MOVE_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///   <para>
        ///     Sent by the server when an entity moves less than four blocks; if an entity moves
        ///     more than 4 blocks Entity Teleport should be sent instead.
        ///   </para>
        ///   <para>
        ///     This packet allows at most four blocks of movement in any direction, because the
        ///     range of a signed char is from -4*32 to 4*32-1.
        ///   </para>
        /// </summary>
        class SCPlayEntityRelativeMovePacket : public Packet
        {
        public:
            SCPlayEntityRelativeMovePacket() : Packet(PacketType::SC_PLAY_ENTITY_RELATIVE_MOVE) { };
            SCPlayEntityRelativeMovePacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The entity ID of the entity that's moving.
            /// </summary>
            int32_t mEntityID;

            /// <summary>
            ///     Change in X position multiplied by 32.
            /// </summary>
            int8_t mDeltaX;

            /// <summary>
            ///     Change in Y position multiplied by 32.
            /// </summary>
            int8_t mDeltaY;

            /// <summary>
            ///     Change in Z position multiplied by 32.
            /// </summary>
            int8_t mDeltaZ;
        };
    }
}

#endif

