#ifndef SC_PLAY_ANIMATION_H
#define SC_PLAY_ANIMATION_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent whenever an entity changes animation.
        /// </summary>
        class SCPlayAnimationPacket : public Packet
        {
        public:
            SCPlayAnimationPacket() : Packet(PacketType::SC_PLAY_ANIMATION) { };
            SCPlayAnimationPacket(boost::asio::streambuf buffer);

            enum class Animation : uint8_t
            {
                SWING_ARM               =   0,
                DAMAGE_ANIMATION        =   1,
                LEAVE_BED               =   2,
                EAT_FOOD                =   3,
                CRITICAL_EFFECT         =   4,
                MAGIC_CRITICAL_EFFECT   =   5,
                UNKNOWN                 = 102,
                CROUCH                  = 104,
                UNCROUCH                = 105
            };

            /// <summary>
            ///     The player's entity ID.
            /// </summary>
            VarInt mEntityID;

            /// <summary>
            ///     The animation ID.
            /// </summary>
            Animation mAnimationID;
        };
    }
}

#endif

