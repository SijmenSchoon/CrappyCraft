#ifndef SC_PLAY_ENTITY_EFFECT_H
#define SC_PLAY_ENTITY_EFFECT_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent whenever a status effect (potion effect) is to be applied to an entity.
        /// </summary>
        class SCPlayEntityEffectPacket : public Packet
        {
        public:
            SCPlayEntityEffectPacket() : Packet(PacketType::SC_PLAY_ENTITY_EFFECT) { };
            SCPlayEntityEffectPacket(boost::asio::streambuf buffer);

            enum class StatusEffect : int8_t
            {
                /// <summary>
                ///     Expands FOV, increases walking speed by 20% with each level.
                /// </summary>
                SPEED = 1,

                /// <summary>
                ///     Contracts FOV< decreases walking speed by 15% with each level.
                /// </summary>
                SLOWNESS = 2,

                /// <summary>
                ///     Digging speed increases by 20% with each level. The arm of the player swings
                ///     faster when applied.
                /// </summary>
                HASTE = 3,

                /// <summary>
                ///     Blocks break slower by 20% with each level. The arm of the player swings
                ///     slower when applied.
                /// </summary>
                MINING_FATIGUE = 4,

                /// <summary>
                ///     Increases damage dealt with melee attacks by 130% with each level.
                /// </summary>
                STRENGTH = 5,

                /// <summary>
                ///     Heals 6 HP to players and mobs. Undead mobs are dealt 6 damage. Doubles with
                ///     each level.
                /// </summary>
                INSTANT_HEALTH = 6,

                /// <summary>
                ///     Does 6 damage to players and mobs. Undead mobs are healed 6 HP. Doubles with
                ///     each level.
                /// </summary>
                INSTANT_DAMAGE = 7,

                /// <summary>
                ///     Increases jump height by [level]/8+.46. Reduces fall damage by 1 HP
                ///     per level.
                /// </summary>
                JUMP_BOOST = 8,

                /// <summary>
                ///     Wobbles and warps the screen.
                /// </summary>
                NAUSEA = 9,

                /// <summary>
                ///     Regenerate 1 HP every 50/[level] (rounded down) ticks.
                /// </summary>
                REGENERATION = 10,

                /// <summary>
                ///     Reduces all incoming damage by 20% with each level.
                /// </summary>
                RESISTANCE = 11,

                /// <summary>
                ///     Immunity to fire and lava.
                /// </summary>
                FIRE_RESISTANCE = 12,

                /// <summary>
                ///     Locks the air meter to 100% and increases visibility while under water.
                /// </summary>
                WATER_BREATHING = 13,

                /// <summary>
                ///     Causes the entity model to disappear. Mobs will not attack or see the player
                ///     unless attacked.
                /// </summary>
                INVISIBILITY = 14,

                /// <summary>
                ///     Creates a thick black fog around the player, preventing sprinting and crits.
                /// </summary>
                BLINDNESS = 15,

                /// <summary>
                ///     Increases brightness to 15 (full) everywhere, increases ability to see
                ///     underwater.
                /// </summary>
                NIGHT_VISION = 16,

                /// <summary>
                ///     Causes food meter to deplete by 0.025*[level] per tick. The hunger bar turns
                ///     yellow-green.
                /// </summary>
                HUNGER = 17,

                /// <summary>
                ///     Decreases damage dealt with melee attacks by 1*[level] HP.
                /// </summary>
                WEAKNESS = 18,

                /// <summary>
                ///     Does 1 HP damage every 25/[level] ticks (rounding down) until the mob is at
                //      1 HP. The health bar turns yellow-green.
                /// </summary>
                POISON = 19,

                /// <summary>
                ///     Does 1 HP damage every 40/[level] ticks (rounding down) until the mob's
                ///     death. The health bar turns black.
                /// </summary>
                WITHER = 20,

                /// <summary>
                ///     Adds 4*[level] HP base health, extra health vanishes when the effect ends.
                /// </summary>
                HEALTH_BOOST = 21,

                /// <summary>
                ///     Adds 4*[level] HP absorbtion health that cannot be replenished. Extra health
                ///     vanishes when the effect ends.
                /// </summary>
                ABSORBTION = 22,

                /// <summary>
                ///     Causes the food meter to be replenished by 1*[level] FP per tick.
                /// </summary>
                SATURATION = 23
            };

            /// <summary>
            ///     The affected entity's ID.
            /// </summary>
            int32_t mEntityID;

            /// <summary>
            ///     The status effect to be applied.
            /// </summary>
            StatusEffect mEffect;

            /// <summary>
            ///     The level of the applied potion.
            /// </summary>
            int8_t mLevel;

            /// <summary>
            ///     The duration of the potion.
            /// </summary>
            int16_t mDuration;
        };
    }
}

#endif

