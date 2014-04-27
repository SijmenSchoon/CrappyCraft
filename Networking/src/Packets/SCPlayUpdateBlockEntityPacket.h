#ifndef SC_PLAY_UPDATE_BLOCK_ENTITY_H
#define SC_PLAY_UPDATE_BLOCK_ENTITY_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     The same as a block update, but for block entities.
        /// </summary>
        class SCPlayUpdateBlockEntityPacket : public Packet
        {
        public:
            SCPlayUpdateBlockEntityPacket() : Packet(PacketType::SC_PLAY_UPDATE_BLOCK_ENTITY) { };
            SCPlayUpdateBlockEntityPacket(boost::asio::streambuf buffer);

            enum class Action : uint8_t
            {
                SET_MOB_IN_SPAWNER  = 1
            };

            /// <summary>
            ///     The block entity's X coordinate.
            /// </summary>
            int32_t mX;

            /// <summary>
            ///     The block entity's Y coordinate.
            /// </summary>
            int16_t mY;

            /// <summary>
            ///     The block entity's Z coordinate.
            /// </summary>
            int32_t mZ;

            /// <summary>
            ///     The type of update to perform.
            /// </summary>
            Action mAction;

            /// <summary>
            ///     The length of the NBT data sent.
            /// </summary>
            int16_t mDataLength;

            /// <summary>
            ///     Compressed NBT data.
            /// </summary>
            std::vector<int8_t> mData;
        };
    }
}

#endif

