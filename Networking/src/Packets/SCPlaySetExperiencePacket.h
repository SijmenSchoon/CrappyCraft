#ifndef SC_PLAY_SET_EXPERIENCE_H
#define SC_PLAY_SET_EXPERIENCE_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent by the server when the client's XP levels change.
        /// </summary>
        class SCPlaySetExperiencePacket : public Packet
        {
        public:
            SCPlaySetExperiencePacket() : Packet(PacketType::SC_PLAY_SET_EXPERIENCE) { };
            SCPlaySetExperiencePacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     Value between 0.0f and 1.0f for how full the experience bar is.
            /// </summary>
            float mExperienceBar;

            /// <summary>
            ///     The player's level.
            /// </summary>
            int16_t mLevel;

            /// <summary>
            ///     The player's total amount of XP.
            /// </summary>
            int16_t mTotalExperience;
        };
    }
}

#endif

