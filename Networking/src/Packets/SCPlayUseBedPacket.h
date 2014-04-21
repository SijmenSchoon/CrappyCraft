#ifndef SC_PLAY_USE_BED_H
#define SC_PLAY_USE_BED_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent when the client with the matching entity ID goes to bed. The packet is sent to
        ///     all nearby players, including the one going to bed.
        /// </summary>
        class SCPlayUseBedPacket : public Packet
        {
        public:
            SCPlayUseBedPacket() : Packet(PacketType::SC_PLAY_USE_BED) { };
            SCPlayUseBedPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The player's entity ID.
            /// </summary>
            int32_t mEntityID;

            /// <summary>
            ///     The bed's headboard's X block coordinate.
            /// </summary>
            int32_t mX;

            /// <summary>
            ///     The bed's Y block coordinate.
            /// </summary>
            uint32_t mY;

            /// <summary>
            ///     The bed's headboard's Z block coordinate.
            /// </summary>
            int32_t mZ;
        };
    }
}

#endif

