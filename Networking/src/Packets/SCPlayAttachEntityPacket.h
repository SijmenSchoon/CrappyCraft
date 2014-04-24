#ifndef SC_PLAY_ATTACH_ENTITY_H
#define SC_PLAY_ATTACH_ENTITY_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent whenever a player has been attached to an entity (e.g. a minecart).
        /// </summary>
        class SCPlayAttachEntityPacket : public Packet
        {
        public:
            SCPlayAttachEntityPacket() : Packet(PacketType::SC_PLAY_ATTACH_ENTITY) { };
            SCPlayAttachEntityPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The player's entity ID.
            /// </summary>
            int32_t mPlayerEntityID;

            /// <summary>
            ///     The entity ID of the entity the player has been attached to.
            /// </summary>
            int32_t mAttachedEntityID;

            /// <summary>
            ///     Whether the two are attached via a leash.
            /// </summary>
            bool mLeashed;
        };
    }
}

#endif

