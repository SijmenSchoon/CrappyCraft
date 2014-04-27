#ifndef SC_PLAY_SET_SLOT_H
#define SC_PLAY_SET_SLOT_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent by the server when an item in a slot in a window is added
        ///     or removed.
        /// </summary>
        class SCPlaySetSlotPacket : public Packet
        {
        public:
            SCPlaySetSlotPacket() : Packet(PacketType::SC_PLAY_SET_SLOT) { };
            SCPlaySetSlotPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The window which is being updated. 0 for the player's
            ///     inventory.
            /// </summary>
            int8_t mWindowID;

            /// <summary>
            ///     The slot to be updated.
            /// </summary>
            int16_t mSlot;

            /// <summary>
            ///     The data that should be put in the slot.
            /// </summary>
            Slot mSlotData;
        };
    }
}

#endif

