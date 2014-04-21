#ifndef SC_PLAY_JOIN_GAME_H
#define SC_PLAY_JOIN_GAME_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        class SCPlayJoinGamePacket : public Packet
        {
        public:
            SCPlayJoinGamePacket() : Packet(PacketType::SC_PLAY_JOIN_GAME) { };
            SCPlayJoinGamePacket(boost::asio::streambuf buffer);

            enum class Gamemode : uint8_t
            {
                SURVIVAL           = 0,
                CREATIVE           = 1,
                ADVENTURE          = 2,
                SURVIVAL_HARDCORE  = 8,
                CREATIVE_HARDCORE  = 9,
                ADVENTURE_HARDCORE = 10
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
            ///     The player's entity ID.
            /// </summary>
            int32_t mEntityID;

            /// <summary>
            ///     The player's gamemode.
            /// </summary>
            Gamemode mGamemode;

            /// <summary>
            ///     The dimension the player is in.
            /// </summary>
            Dimension mDimension;

            /// <summary>
            ///     The world's difficulty.
            /// </summary>
            Difficulty mDifficulty;

            /// <summary>
            ///     The maximum amount of players. Used by the client to draw the player list.
            /// </summary>
            uint8_t mMaxPlayers;

            /// <summary>
            ///     The level type of the world. Can be "default", "flat", "largeBiomes",
            ///     "amplified" or "default_1_1".
            /// </summary>
            std::string mLevelType;
        };
    }
}

#endif

