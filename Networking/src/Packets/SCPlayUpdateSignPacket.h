#ifndef SC_PLAY_UPDATE_SIGN_H
#define SC_PLAY_UPDATE_SIGN_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent whenever a sign is discovered or created. Won't be sent
        ///     when a sign is destroyed or unloaded.
        /// </summary>
        class SCPlayUpdateSignPacket : public Packet
        {
        public:
            SCPlayUpdateSignPacket() : Packet(PacketType::SC_PLAY_UPDATE_SIGN) { };
            SCPlayUpdateSignPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The sign's X coordinate.
            /// </summary>
            int32_t mX;

            /// <summary>
            ///     The sign's Y coordinate.
            /// </summary>
            int16_t mY;

            /// <summary>
            ///     The sign's Z coordinate.
            /// </summary>
            int32_t mZ;

            /// <summary>
            ///     The text on the sign.
            /// </summary>
            std::string mText[4];
        };
    }
}

#endif

