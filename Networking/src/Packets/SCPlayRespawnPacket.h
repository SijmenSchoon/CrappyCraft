#ifndef SC_PLAY_RESPAWN_H
#define SC_PLAY_RESPAWN_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Used to change the player's dimension. Followed by prechunks/chunks for the new
        ///     dimension, and a position and look packet. The client will have to unload the chunks.
        /// </summary>
        class SCPlayRespawnPacket : public Packet
        {
        public:
            SCPlayRespawnPacket() : Packet(PacketType::SC_PLAY_RESPAWN) { };
            SCPlayRespawnPacket(boost::asio::streambuf buffer);

            enum class Gamemode : uint8_t
            {
                SURVIVAL           = 0,
                CREATIVE           = 1,
                ADVENTURE          = 2,
            };

            enum class Dimension : int8_t
            {
                NETHER      = -1,
                OVERWORLD   = 0,
                END         = 1
            };

            enum class Difficulty : uint8_t
            {
                PEACEFUL    = 0,
                EASY        = 1,
                NORMAL      = 2,
                HARD        = 3
            };

            /// <summary>
            ///     The dimension the player is in.
            /// </summary>
            Dimension mDimension;

            /// <summary>
            ///     The world's difficulty.
            /// </summary>
            Difficulty mDifficulty;

            /// <summary>
            ///     The player's gamemode.
            /// </summary>
            Gamemode mGamemode;

            // <summary>
            ///     The level type of the world. Can be "default", "flat", "largeBiomes",
            ///     "amplified" or "default_1_1".
            /// </summary>
            std::string mLevelType;
        };
    }
}

#endif

