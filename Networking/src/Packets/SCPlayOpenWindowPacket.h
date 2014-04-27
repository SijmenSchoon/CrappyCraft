#ifndef SC_PLAY_OPEN_WINDOW_H
#define SC_PLAY_OPEN_WINDOW_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent whenever the client should open an inventory. Not sent for
        ///     players opening their own inventory.
        /// </summary>
        class SCPlayOpenWindowPacket : public Packet
        {
        public:
            SCPlayOpenWindowPacket() : Packet(PacketType::SC_PLAY_OPEN_WINDOW) { };
            SCPlayOpenWindowPacket(boost::asio::streambuf buffer);

            enum class WindowType : uint8_t
            {
                CHEST               =  0,
                WORKBENCH           =  1,
                FURNACE             =  2,
                DISPENSER           =  3,
                ENCHANTMENT_TABLE   =  4,
                BREWING_STAND       =  5,
                NPC_TRADE           =  6,
                BEACON              =  7,
                ANVIL               =  8,
                HOPPER              =  9,
                DROPPER             = 10,
                HORSE               = 11
            };

            /// <summary>
            ///     An unique ID for the window to be displayed.
            /// </summary>
            uint8_t mWindowID;

            /// <summary>
            ///     The window type to display.
            /// </summary>
            WindowType mWindowType;

            /// <summary>
            ///     The window's title.
            /// </summary>
            std::string mWindowTitle;

            /// <summary>
            ///     The number of slots in the window (excluding the slots in
            ///     the player's own inventory).
            /// </summary>
            uint8_t mSlotCount;

            /// <summary>
            ///     When true, the client uses mWIndowTitle as title. Else,
            ///     it will use the default.
            /// </summary>
            bool mUseProvidedTitle;

            /// <summary>
            ///     The entity ID of the animal the inventory belongs to. Only
            ///     sent when the window type is equal to HORSE (11).
            /// </summary>
            int32_t mEntityID;
        };
    }
}

#endif

