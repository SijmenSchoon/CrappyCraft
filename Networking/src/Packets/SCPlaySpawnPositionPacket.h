#ifndef SC_PLAY_SPAWN_POSITION_H
#define SC_PLAY_SPAWN_POSITION_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent by the server after login to specify the coordinates of the spawn point (used
        ///     by compasses). It can be sent at any time to update the point compasses point at.
        /// </summary>
        class SCPlaySpawnPositionPacket : public Packet
        {
        public:
            SCPlaySpawnPositionPacket() : Packet(PacketType::SC_PLAY_SPAWN_POSITION) { };
            SCPlaySpawnPositionPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The spawn X block coordinate.
            /// </summary>
            int32_t mX;

            /// <summary>
            ///     The spawn Y block coordinate.
            /// </summary>
            int32_t mY;

            /// <summary>
            ///     The spawn Z block coordinate.
            /// </summary>
            int32_t mZ;
        };
    }
}

#endif

