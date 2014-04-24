#ifndef SC_PLAY_ENTITY_LOOK_H
#define SC_PLAY_ENTITY_LOOK_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent by the server when an entity rotates.
        /// </summary>
        class SCPlayEntityLookPacket : public Packet
        {
        public:
            SCPlayEntityLookPacket() : Packet(PacketType::SC_PLAY_ENTITY_LOOK) { };
            SCPlayEntityLookPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The rotating entity's entity ID.
            /// </summary>
            int32_t mEntityID;

            /// <summary>
            ///     The rotation on the X axis in steps of 2pi/256.
            /// </summary>
            int8_t mDeltaYaw;

            /// <summary>
            ///     The rotation on the Y axis in steps of 2pi/256.
            /// </summary>
            int8_t mDeltaPitch;
        };
    }
}

#endif

