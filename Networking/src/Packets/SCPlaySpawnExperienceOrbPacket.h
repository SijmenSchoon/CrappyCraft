#ifndef SC_PLAY_SPAWN_EXPERIENCE_ORB_H
#define SC_PLAY_SPAWN_EXPERIENCE_ORB_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Spawns one or more experience orb.
        /// </summary>
        class SCPlaySpawnExperienceOrbPacket : public Packet
        {
        public:
            SCPlaySpawnExperienceOrbPacket() : Packet(PacketType::SC_PLAY_SPAWN_EXPERIENCE_ORB) { };
            SCPlaySpawnExperienceOrbPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The orb's entity ID.
            /// </summary>
            VarInt mEntityID;

            /// <summary>
            ///     The orb's X coordinate multiplied by 32.
            /// </summary>
            int32_t mX;

            /// <summary>
            ///     The orb's Y coordinate multiplied by 32.
            /// </summary>
            int32_t mY;

            /// <summary>
            ///     The orb's Z coordinate multiplied by 32.
            /// </summary>
            int32_t mZ;

            /// <summary>
            ///     The amount of XP the orb is worth.
            /// </summary>
            int16_t mCount;
        };
    }
}

#endif

