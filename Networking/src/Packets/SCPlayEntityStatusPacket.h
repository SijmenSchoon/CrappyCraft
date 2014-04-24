#ifndef SC_PLAY_ENTITY_STATUS_H
#define SC_PLAY_ENTITY_STATUS_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        class SCPlayEntityStatusPacket : public Packet
        {
        public:
            SCPlayEntityStatusPacket() : Packet(PacketType::SC_PLAY_ENTITY_STATUS) { };
            SCPlayEntityStatusPacket(boost::asio::streambuf buffer);

            enum class EntityStatus : int32_t
            {
                UNKNOWN_1           =  0, // Something related to moving entities?
                UNKNOWN_2           =  1, // Something related to the player entity?
                ENTITY_HURT         =  2,
                ENTITY_DEAD         =  3,
                IRON_GOLEM_ATTACK   =  4, // Iron golem throwing up his arms.
                WOLF_TAMING         =  6,
                WOLF_TAMED          =  7,
                WOLF_SHAKING_WATER  =  8, // Wolf shaking water off
                EATING_ACCEPTED     =  9, // Sent when the player can continue eating
                SHEEP_EATING_GRASS  = 10,
                IRON_GOLEM_ROSE     = 11, // Iron golem handing over a rose
                VILLAGER_HEARTS     = 12,
                VILLAGER_ANGRY      = 13, // Particles indicating villager is angry.
                VILLAGER_HAPPY      = 14,
                WITCH_PARTICLES     = 15, // Spawn a "magic" particle near a witch
                ZOMBIE_TO_VILLAGER  = 16, // Zombie becoming a villager by shaking (unused)
                FIREWORK_EXPLODING  = 17,
                UNKNOWN_3           = 18  // Falling in love with a human?
            };

            /// <summary>
            ///     The entity's ID.
            /// </summary>
            int32_t mEntityID;

            /// <summary>
            ///     The entity's status.
            /// </summary>
            EntityStatus mEntityStatus;
        };
    }
}

#endif

