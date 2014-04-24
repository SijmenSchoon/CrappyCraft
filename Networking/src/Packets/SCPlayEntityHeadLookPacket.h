#ifndef SC_PLAY_ENTITY_HEAD_LOOK_H
#define SC_PLAY_ENTITY_HEAD_LOOK_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent by the server when the direction an entity's head is facing in changes.
        /// </summary>
        class SCPlayEntityHeadLookPacket : public Packet
        {
        public:
            SCPlayEntityHeadLookPacket() : Packet(PacketType::SC_PLAY_ENTITY_HEAD_LOOK) { };
            SCPlayEntityHeadLookPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The looking entity's ID.
            /// </summary>
            int32_t mEntityID;

            /// <summary>
            ///     The entity's head's yaw in steps of 2pi/256.
            /// </summary>
            int8_t mHeadYaw;
        };
    }
}

#endif

