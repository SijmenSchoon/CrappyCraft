#ifndef SC_PLAY_ENTITY_TELEPORT_H
#define SC_PLAY_ENTITY_TELEPORT_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     This packet is sent by the server when an entity moves morethan 4 blocks.
        /// </summary>
        class SCPlayEntityTeleportPacket : public Packet
        {
        public:
            SCPlayEntityTeleportPacket() : Packet(PacketType::SC_PLAY_ENTITY_TELEPORT) { };
            SCPlayEntityTeleportPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The teleporting entity's ID
            /// </summary>
            int32_t mEntityID;

            /// <summary>
            ///     The entity's X position multiplied by 32.
            /// </summary>
            int32_t mX;

            /// <summary>
            ///     The entity's Y position multiplied by 32.
            /// </summary>
            int32_t mY;

            /// <summary>
            ///     The entity's Z position multiplied by 32.
            /// </summary>
            int32_t mZ;

            /// <summary>
            ///     The entity's rotation on the X axis in steps of 2pi/256.
            /// </summary>
            int8_t mDeltaYaw;

            /// <summary>
            ///     The entity's rotation on the Y axis in steps of 2pi/256.
            /// </summary>
            int8_t mDeltaPitch;
        };
    }
}

#endif

