#ifndef SC_PLAY_SPAWN_OBJECT_H
#define SC_PLAY_SPAWN_OBJECT_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent by the server when an object or vehicle is created.
        /// </summary>
        class SCPlaySpawnObjectPacket : public Packet
        {
        public:
            SCPlaySpawnObjectPacket() : Packet(PacketType::SC_PLAY_SPAWN_OBJECT) { };
            SCPlaySpawnObjectPacket(boost::asio::streambuf buffer);

            enum class ObjectType : int8_t
            {
                BOAT                = 1,
                ITEM_STACK          = 2,
                MINECART            = 10,
                ACTIVATED_TNT       = 50,
                ENDER_CRYSTAL       = 51,
                ARROW               = 60,
                SNOWBALL            = 61,
                EGG                 = 62,
                FIRE_BALL           = 63,
                FIRE_CHARGE         = 64,
                THROWN_ENDERPEARL   = 65,
                WITHER_SKULL        = 66,
                FALLING_OBJECTS     = 70,
                ITEM_FRAMES         = 71,
                EYE_OF_ENDER        = 72,
                THROWN_POTION       = 73,
                FALLING_DRAGON_EGG  = 74,
                THROWN_EXP_BOTTLE   = 75,
                FISHING_FLOAT       = 90
            };

            /// <summary>
            ///     The object's entity ID.
            /// </summary>
            VarInt mEntityID;

            /// <summary>
            ///     The type of the object.
            /// </summary>
            ObjectType mType;

            /// <summary>
            ///     The object's X coordinate multiplied by 32.
            /// </summary>
            int32_t mX;

            /// <summary>
            ///     The object's Y coordinate multiplied by 32.
            /// </summary>
            int32_t mY;

            /// <summary>
            ///     The object's Z coordinate multiplied by 32.
            /// </summary>
            int32_t mZ;

            /// <summary>
            ///     The pitch in steps of 2PI/256.
            /// </summary>
            int8_t mPitch;

            /// <summary>
            ///     The yaw in steps of 2PI/256.
            /// </summary>
            int8_t mYaw;

            /// <summary>
            ///     Extra data, specific to the object type.
            /// </summary>
            ObjectData mData;
        };
    }
}

#endif

