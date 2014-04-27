#ifndef SC_PLAY_CLOSE_WINDOW_H
#define SC_PLAY_CLOSE_WINDOW_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent to the client to forcibly close a window.
        /// </summary>
        class SCPlayCloseWindowPacket : public Packet
        {
        public:
            SCPlayCloseWindowPacket() : Packet(PacketType::SC_PLAY_CLOSE_WINDOW) { };
            SCPlayCloseWindowPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The ID of the window being closed. 0 for the player's own
            ///     inventory.
            /// </summary>
            uint8_t mWindowID;
        };
    }
}

#endif

