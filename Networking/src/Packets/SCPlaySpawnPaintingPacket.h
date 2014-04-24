#ifndef SC_PLAY_SPAWN_PAINTING_H
#define SC_PLAY_SPAWN_PAINTING_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     This packet shows the location, name and direction of a
        ///     painting.
        /// </summary>
        class SCPlaySpawnPaintingPacket : public Packet
        {
        public:
            SCPlaySpawnPaintingPacket() : Packet(PacketType::SC_PLAY_SPAWN_PAINTING) { };
            SCPlaySpawnPaintingPacket(boost::asio::streambuf buffer);

            enum class Direction : int32_t
            {
                NEGATIVE_Z = 0,
                NEGATIVE_X = 1,
                POSITIVE_Z = 2,
                POSITIVE_X = 3
            };

            /// <summary>
            ///     The painting's entity ID.
            /// </summary>
            VarInt mEntityID;

            /// <summary>
            ///     The title of the painting. Maximum length of 13 characters.
            /// </summary>
            std::string mTitle;

            /// <summary>
            ///     The X coordinate of the center of the painting. Calculating
            ///     the center of an image: given a (width*height) grid of
            ///     cells, with (0, 0) being the top left corner, the center is
            ///     (max(0, width / 2 - 1), height / 2).
            /// </summary>
            int32_t mX;

            /// <summary>
            ///     The Y coordinate of the center of the painting. Calculating
            ///     the center of an image: given a (width*height) grid of
            ///     cells, with (0, 0) being the top left corner, the center is
            ///     (max(0, width / 2 - 1), height / 2).
            /// </summary>
            int32_t mY;

            /// <summary>
            ///     The Z coordinate of the center of the painting. Calculating
            ///     the center of an image: given a (width*height) grid of
            ///     cells, with (0, 0) being the top left corner, the center is
            ///     (max(0, width / 2 - 1), height / 2).
            /// </summary>
            int32_t mZ;

            /// <summary>
            ///     The direction the painting is facing in.
            /// </summary>
            Direction mDirection;
        };
    }
}

#endif

