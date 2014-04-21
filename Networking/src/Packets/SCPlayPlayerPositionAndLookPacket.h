#ifndef SC_PLAY_PLAYER_POSITION_AND_LOOK_H
#define SC_PLAY_PLAYER_POSITION_AND_LOOK_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Updates the player's position on the server. If the distance between the last known
        ///     position set by this packet is greater than 100 units, the client will be kicked for
        ///     moving too quickly. The client will also be kicked if the X or Z coordinate is
        ///     greater than 3.2E+7 for an illegal position.
        /// </summary>
        class SCPlayPlayerPositionAndLookPacket : public Packet
        {
        public:
            SCPlayPlayerPositionAndLookPacket() : Packet(PacketType::SC_PLAY_PLAYER_POSITION_AND_LOOK) { };
            SCPlayPlayerPositionAndLookPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The player's X coordinate.
            /// </summary>
            double mX;

            /// <summary>
            ///     The player's Y coordinate (eye level).
            /// </summary>
            double mY;

            /// <summary>
            ///     The player's Z coordinate.
            /// </summary>
            double mZ;

            /// <summary>
            ///   <para>
            ///     The player's yaw in degrees.
            ///   </para>
            ///   <para>
            ///     Yaw is measured in degrees, and does not follow classical trigonometry rules.
            ///     The unit circle of yaw on the XZ-plane starts at (0, 1) and turns counter-
            ///     clockwise, with 90 degrees at (-1, 0), 180 degrees at (0, -1) and 270° at
            ///     (1, 0). Additionally, yaw is not clamped to between 0° and 360°; any number is
            ///     valid, including negative values and values greater than 360.0.
            ///   </para>
            /// </summary>
            float mYaw;

            /// <summary>
            ///     The player's pitch in degrees, where 0 degrees means looking straight ahead,
            ///     -90 degrees looking straight up and 90 degrees looking straight down.
            /// </summary>
            float mPitch;

            /// <summary>
            ///     true if the client is on the ground, false otherwise.
            /// </summary>
            bool mOnGround;
        };
    }
}

#endif

