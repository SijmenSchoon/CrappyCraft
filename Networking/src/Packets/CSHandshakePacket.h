#ifndef CS_HANDSHAKE_H
#define CS_HANDSHAKE_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Causes the server to switch into the target state.
        /// </summary>
        class CSHandshakePacket : public Packet
        {
        public:
            CSHandshakePacket() : Packet(PacketType::CS_HANDSHAKE) { };
            CSHandshakePacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The protocol version, 5 as of 1.7.6.
            /// </summary>
            VarInt mProtocolVersion;

            /// <summary>
            ///     The address of the server the client's connecting to.
            /// </summary>
            std::string mServerAddress;

            /// <summary>
            ///     The port of the server the client's connecting to.
            /// </summary>
            uint16_t mServerPort;

            /// <summary>
            ///     The state the server should switch to. 1 for status, 2 for login.
            /// </summary>
            VarInt mNextState;
        };
    }
}

#endif

