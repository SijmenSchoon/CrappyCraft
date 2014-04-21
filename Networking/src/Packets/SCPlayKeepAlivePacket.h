#ifndef SC_PLAY_KEEP_ALIVE_H
#define SC_PLAY_KEEP_ALIVE_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     The server will frequently send out a keep-alive, each containing a random ID. The
        ///     client must respond with the same packet.
        /// </summary>
        class SCPlayKeepAlivePacket : public Packet
        {
        public:
            SCPlayKeepAlivePacket() : Packet(PacketType::SC_PLAY_KEEP_ALIVE) { };
            SCPlayKeepAlivePacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The keep-alive ID the client should respond with.
            /// </summary>
            int32_t mKeepAliveID;
        };
    }
}

#endif

