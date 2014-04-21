#ifndef SC_PLAY_UPDATE_HEALTH_H
#define SC_PLAY_UPDATE_HEALTH_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent by the server to update/set the health of the player.
        /// </summary>
        class SCPlayUpdateHealthPacket : public Packet
        {
        public:
            SCPlayUpdateHealthPacket() : Packet(PacketType::SC_PLAY_UPDATE_HEALTH) { };
            SCPlayUpdateHealthPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The player's health. <0 means that the player is dead, and 20.0 means the player
            ///     is at full health.
            /// </summary>
            float mHealth;

            /// <summary>
            ///     The food level of the player. 0 means that the player is starving, and 20 means
            ///     that the food level is maxed.
            /// </summary>
            int16_t mFood;

            /// <summary>
            ///     Acts as a "overcharge". Food values will not decrease while the saturation is
            ///     over 0. Players logging in automatically get a saturation of 5.0. Eating food
            ///     increases this, as well as the food bar.
            /// </summary>
            float   mFoodSaturation;
        };
    }
}

#endif

