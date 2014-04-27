#ifndef SC_PLAY_WINDOW_PROPERTY_H
#define SC_PLAY_WINDOW_PROPERTY_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        class SCPlayWindowPropertyPacket : public Packet
        {
        public:
            SCPlayWindowPropertyPacket() : Packet(PacketType::SC_PLAY_WINDOW_PROPERTY) { };
            SCPlayWindowPropertyPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The window's ID.
            /// </summary>
            uint8_t mWindowID;

            /// <summary>
            ///     The property that should be updated. Every window has its
            ///     own property IDs.
            /// </summary>
            int16_t mProperty;

            /// <summary>
            ///     The value the property should be set to.
            /// </summary>
            int16_t mValue;
        };
    }
}

#endif

