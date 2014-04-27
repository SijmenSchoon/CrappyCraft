#ifndef SC_PLAY_CONFIRM_TRANSACTION_H
#define SC_PLAY_CONFIRM_TRANSACTION_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Indicates whether a request from client was accepted, or whether
        ///     there was a conflict (due to lag or other reasons).
        /// </summary>
        class SCPlayConfirmTransactionPacket : public Packet
        {
        public:
            SCPlayConfirmTransactionPacket() : Packet(PacketType::SC_PLAY_CONFIRM_TRANSACTION) { };
            SCPlayConfirmTransactionPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The ID of the window the transaction occured in.
            /// </summary>
            uint8_t mWindowID;

            /// <summary>
            ///     The unique ID of the transaction.
            /// </summary>
            int16_t mActionID;

            /// <summary>
            ///     Whether or not the action was accepted.
            /// </summary>
            bool mAccepted;
        };
    }
}

#endif

