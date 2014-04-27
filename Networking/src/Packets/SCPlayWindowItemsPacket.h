#ifndef SC_PLAY_WINDOW_ITEMS_H
#define SC_PLAY_WINDOW_ITEMS_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Contains all the items in a window, including the main
        ///     inventory, equipped armour and crafting slots.
        /// </summary>
        class SCPlayWindowItemsPacket : public Packet
        {
        public:
            SCPlayWindowItemsPacket() : Packet(PacketType::SC_PLAY_WINDOW_ITEMS) { };
            SCPlayWindowItemsPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The ID of the window the items are being sent for. 0 for the
            ///     player's inventory.
            /// </summary>
            uint8_t mWindowID;

            /// <summary>
            ///     The number of slots being sent.
            /// </summary>
            int16_t mCount;

            /// <summary>
            ///     The slots being updated.
            /// </summary>
            std::vector<Slot> mSlots;
        };
    }
}

#endif

