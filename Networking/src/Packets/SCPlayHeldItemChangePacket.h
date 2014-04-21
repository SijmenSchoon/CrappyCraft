#ifndef SC_PLAY_HELD_ITEM_CHANGE_H
#define SC_PLAY_HELD_ITEM_CHANGE_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent to change the player's slot selection.
        /// </summary>
        class SCPlayHeldItemChangePacket : public Packet
        {
        public:
            SCPlayHeldItemChangePacket() : Packet(PacketType::SC_PLAY_HELD_ITEM_CHANGE) { };
            SCPlayHeldItemChangePacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The slot selected by the player (0...9)
            /// </summary>
            int8_t mSlot;
        };
    }
}

#endif

