#ifndef SC_PLAY_SPAWN_PLAYER_H
#define SC_PLAY_SPAWN_PLAYER_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent by the server when a player comes into visible range, not when a player joins.
        ///     Servers can however safely spawn player entities not in visible range, the client
        ///     handles it gracefully. In online-mode the UUIDs must be valid and have valid skin
        ///     blobs, in offline-mode UUID v3 is used.
        /// </summary>
        class SCPlaySpawnPlayerPacket : public Packet
        {
        public:
            SCPlaySpawnPlayerPacket() : Packet(PacketType::SC_PLAY_SPAWN_PLAYER) { };
            SCPlaySpawnPlayerPacket(boost::asio::streambuf buffer);

            struct Data
            {
                /// <summary>
                ///     Name of the property as returned by the session server's /hasJoined.
                /// </summary>
                std::string Name;

                /// <summary>
                ///     Value of the property (base64) as returned by the session server's
                ///     /hasJoined.
                /// </summary>
                std::string Value;

                /// <summary>
                ///     Signature of the property (base64) as returned by the session server's
                ///     /hasJoined.
                /// </summary>
                std::string Signature;
            };

            /// <summary>
            ///     The player's entity ID
            /// </summary>
            VarInt mEntityID;

            /// <summary>
            ///     The player's UUID
            /// </summary>
            std::string mPlayerUUID;

            /// <summary>
            ///     The player's name
            /// </summary>
            std::string mPlayerName;

            VarInt              mDataCount;
            std::vector<Data>   mData;

            /// <summary>
            ///     The player's X coordinate multiplied by 32.
            /// </summary>
            int32_t mX;

            /// <summary>
            ///     The player's Y coordinate multiplied by 32.
            /// </summary>
            int32_t mY;

            /// <summary>
            ///     The player's Z coordinate multiplied by 32.
            /// </summary>
            int32_t mZ;

            /// <summary>
            ///     The player's yaw as a packed byte.
            /// </summary>
            int8_t mYaw;

            /// <summary>
            ///     The player's pitch as a packed byte.
            /// </summary>
            int8_t mPitch;

            /// <summary>
            ///     The item the player is currently holding. Note that this should be 0 for "no
            ///     item", unlike -1 used in other packets. A negative value crashes the client.
            /// </summary>
            int16_t mCurrentItem;

            /// <summary>
            ///     The client will crash if no metadata is sent.
            /// </summary>
            Metadata mMetadata;
        };
    }
}

#endif

