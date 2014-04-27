#ifndef SC_PLAY_EXPLOSION_H
#define SC_PLAY_EXPLOSION_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent when an explosion occurs (creepers, TNT and ghast fireballs). Each block sent
        ///     in mRecords has to be set to air.
        /// </summary>
        class SCPlayExplosionPacket : public Packet
        {
        public:
            SCPlayExplosionPacket() : Packet(PacketType::SC_PLAY_EXPLOSION) { };
            SCPlayExplosionPacket(boost::asio::streambuf buffer);

            struct Record
            {
                /// <summary>
                ///     The distance from the explosion on the X axis.
                /// </summary>
                int8_t mDeltaX;

                /// <summary>
                ///     The distance from the explosion on the Y axis.
                /// </summary>
                int8_t mDeltaY;

                /// <summary>
                ///     The distance from the explosion on the Z axis.
                /// </summary>
                int8_t mDeltaZ;
            };

            /// <summary>
            ///     The X coordinate of the explosion.
            /// </summary>
            float mX;

            /// <summary>
            ///     The Y coordinate of the explosion.
            /// </summary>
            float mY;

            /// <summary>
            ///     The Z coordinate of the explosion.
            /// </summary>
            float mZ;

            /// <summary>
            ///     The radius of the explosion, currently unused in the client.
            /// </summary>
            float mRadius;

            /// <summary>
            ///     The amount of records included in the packet. The size of the records field is
            ///     this value times three.
            /// </summary>
            int32_t mRecordCount;

            /// <summary>
            ///     Array of blocks affected by the explosion. Each of those have to be set to air.
            /// </summary>
            std::vector<Record> mRecords;

            /// <summary>
            ///     New velocity of the player on the X axis due to being pushed by the explosion.
            /// </summary>
            float mVelocityX;

            /// <summary>
            ///     New velocity of the player on the Y axis due to being pushed by the explosion.
            /// </summary>
            float mVelocityY;

            /// <summary>
            ///     New velocity of the player on the Z axis due to being pushed by the explosion.
            /// </summary>
            float mVelocityZ;
        };
    }
}

#endif

