#ifndef SC_PLAY_SPAWN_GLOBAL_ENTITY_H
#define SC_PLAY_SPAWN_GLOBAL_ENTITY_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Used for notifying the client of thunderbolts striking within a
        ///     512 block radius around the player. The coordinates specify
        ///     where the lightning strikes.
        /// </summary>
        class SCPlaySpawnGlobalEntityPacket : public Packet
        {
        public:
            SCPlaySpawnGlobalEntityPacket() : Packet(PacketType::SC_PLAY_SPAWN_GLOBAL_ENTITY) { };
            SCPlaySpawnGlobalEntityPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The lightning's entity ID.
            /// </summary>
            VarInt mEntityID;

            /// <summary>
            ///     The global entity type, currently always 1 for lightning.
            /// </summary>
            int8_t mByte;

            /// <summary>
            ///     The thunderbolt's X coordinate multiplied by 32.
            /// </summary>
            int32_t mX;

            /// <summary>
            ///     The thunderbolt's Y coordinate multiplied by 32.
            /// </summary>
            int32_t mY;

            /// <summary>
            ///     The thunderbolt's Z coordinate multiplied by 32.
            /// </summary>
            int32_t mZ;
        };
    }
}

#endif

