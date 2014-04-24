#ifndef SC_PLAY_ENTITY_VELOCITY_H
#define SC_PLAY_ENTITY_VELOCITY_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        class SCPlayEntityVelocityPacket : public Packet
        {
        public:
            SCPlayEntityVelocityPacket() : Packet(PacketType::SC_PLAY_ENTITY_VELOCITY) { };
            SCPlayEntityVelocityPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The entity of which the velocity is reported.
            /// </summary>
            int32_t mEntityID;

            /// <summary>
            ///     The entity's velocity on the X axis. Velocity is believed to be in units of
            ///     1/8000 per server tick (1/20).
            /// </summary>
            int16_t mVelocityX;

            /// <summary>
            ///     The entity's velocity on the Y axis. Velocity is believed to be in units of
            ///     1/8000 per server tick (1/20).
            /// </summary>
            int16_t mVelocityY;

            /// <summary>
            ///     The entity's velocity on the Y axis. Velocity is believed to be in units of
            ///     1/8000 per server tick (1/20).
            /// </summary>
            int16_t mVelocityY;
        };
    }
}

#endif

