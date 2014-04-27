#ifndef SC_PLAY_EFFECT_H
#define SC_PLAY_EFFECT_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent when a client is to play a sound or particle effect.
        ///     <para>
        ///         By default, the minecraft client adjusts the volume of sounds effects based on
        ///         distance. The final boolean field is used to disable this, and instead the
        ///         effect is played two blocks away in the correct direction.
        ///     </para>
        ///     <para>
        ///         Currently, this is only used for effects MOB_WITHER_SPAWN and
        ///         MOB_ENDERDRAGON_END, and is ignored by the client for any other value.
        ///     </para>
        /// </summary>
        class SCPlayEffectPacket : public Packet
        {
        public:
            SCPlayEffectPacket() : Packet(PacketType::SC_PLAY_EFFECT) { };
            SCPlayEffectPacket(boost::asio::streambuf buffer);

            enum class Effect : int32_t
            {
                RANDOM_CLICK_1              = 1000,
                RANDOM_CLICK_2              = 1001,
                RANDOM_BOW                  = 1002,
                RANDOM_DOOR_OPEN_CLOSE      = 1003,
                RANDOM_FIZZ                 = 1004,
                PLAY_MUSIC_DISC             = 1005,
                MOB_GHAST_CHARGE            = 1007,
                MOB_GHAST_FIREBALL          = 1008,
                MOB_GHAST_FIREBALL_QUIET    = 1009,
                MOB_ZOMBIE_WOOD             = 1010,
                MOB_ZOMBIE_METAL            = 1011,
                MOB_ZOMBIE_WOODBREAK        = 1012,
                MOB_WITHER_SPAWN            = 1013,
                MOB_WITHER_SHOOT            = 1014,
                MOB_BAT_TAKEOFF             = 1015,
                MOB_ZOMBIE_INFECT           = 1016,
                MOB_ZOMBIE_UNFECT           = 1017,
                MOB_ENDERDRAGON_END         = 1018,
                RANDOM_ANVIL_BREAK          = 1020,
                RANDOM_ANVIL_USE            = 1021,
                RANDOM_ANVIL_LAND           = 1022,

                SMOKE                       = 2000, /// Spawns 10 smoke particles
                BLOCK_BREAK                 = 2001,
                SPLASH_POTION               = 2002, /// The particles as well as the breaking sound
                EYE_OF_ENDER_BREAK          = 2003, /// The particles as well as the sound
                MOB_SPAWN                   = 2004,
                HAPPY_VILLAGER              = 2005, /// Used for bonemealing as well
                FALL_PARTICLES              = 2006
            };

            enum class SmokeDirection : int32_t
            {
                SOUTH_EAST  = 0,
                SOUTH       = 1,
                SOUTH_WEST  = 2,
                EAST        = 3,
                MIDDLE      = 4,
                WEST        = 5,
                NORTH_EAST  = 6,
                NORTH       = 7,
                NORTH_WEST  = 8
            };

            /// <summary>
            ///     The effect to be played.
            /// </summary>
            Effect mEffect;

            /// <summary>
            ///     The effect's X coordinate.
            /// </summary>
            int32_t mX;

            /// <summary>
            ///     The effect's Y coordinate.
            /// </summary>
            uint8_t mY;

            /// <summary>
            ///     The effect's Z coordinate.
            /// </summary>
            int32_t mZ;

            /// <summary>
            ///     Extra data for certain effects.
            /// </summary>
            int32_t mData;

            /// <summary>
            ///     Disables the automatic volume determination for effects MOB_WITHER_SPAWN and
            ///     MOB_ENDERDRAGON_END. Currently doesn't work for other effects.
            /// </summary>
            bool mNoRelativeVolume;
        };
    }
}

#endif

