#ifndef SC_PLAY_ENTITY_LOOK_AND_RELATIVE_MOVE_H
#define SC_PLAY_ENTITY_LOOK_AND_RELATIVE_MOVE_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent by the server when an entity rotates and moves. Since a char's range is limited
        ///     from -4*32 to 4*32=1 this packet allows at most four blocks of movement in any
        ///     direction.
        /// </summary>
        class SCPlayEntityLookAndRelativeMovePacket : public Packet
        {
        public:
            SCPlayEntityLookAndRelativeMovePacket() :
                Packet(PacketType::SC_PLAY_ENTITY_LOOK_AND_RELATIVE_MOVE) { };
            SCPlayEntityLookAndRelativeMovePacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The entity ID of the entity that's looking/moving.
            /// </summary>
            int32_t mEntityID;

            /// <summary>
            ///     Change in the X coordinate multiplied by 32.
            /// </summary>
            int8_t mDeltaX;

            /// <summary>
            ///     Change in the Y coordinate multiplied by 32.
            /// </summary>
            int8_t mDeltaY;

            /// <summary>
            ///     Change in the Z coordinate multiplied by 32.
            /// </summary>
            int8_t mDeltaZ;

            /// <summary>
            ///     The X axis rotation in steps of 2pi/256.
            /// </summary>
            int8_t mDeltaYaw;

            /// <summary>
            ///     The Y axis rotation in steps of 2pi/256.
            /// </summary>
            int8_t mDeltaPitch;
        };
    }
}

#endif

