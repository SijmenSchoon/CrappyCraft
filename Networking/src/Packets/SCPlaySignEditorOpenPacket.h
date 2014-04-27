#ifndef SC_PLAY_SIGN_EDITOR_OPEN_H
#define SC_PLAY_SIGN_EDITOR_OPEN_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Opens the sign editor on clients. Sent on placement of a sign.
        /// </summary>
        class SCPlaySignEditorOpenPacket : public Packet
        {
        public:
            SCPlaySignEditorOpenPacket() : Packet(PacketType::SC_PLAY_SIGN_EDITOR_OPEN) { };
            SCPlaySignEditorOpenPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The sign's X coordinate.
            /// </summary>
            int32_t mX;

            /// <summary>
            ///     The sign's Y coordinate.
            /// </summary>
            int32_t mY;

            /// <summary>
            ///     The sign's Z coordinate.
            /// </summary>
            int32_t mZ;
        };
    }
}

#endif

