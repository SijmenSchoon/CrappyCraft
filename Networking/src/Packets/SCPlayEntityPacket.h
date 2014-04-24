#ifndef SC_PLAY_ENTITY_H
#define SC_PLAY_ENTITY_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///   <para>
        ///     Most entity-related packets are subclasses of this packet. When sent from the server
        ///     to a client, it may initialize the entry.
        ///   </para>
        ///   <para>
        ///     For player entities, either this packet or any move/look packet is sent every game
        ///     tick. So the meaning of this packet is basically that the entity did not move/look
        ///     since the last such packet.
        ///   </para>
        /// </summary>
        class CSPlayEntityPacket : public Packet
        {
        public:
            CSPlayConfirmTransactionPacket() : Packet(PacketType::SC_PLAY_ENTITY) { };
            CSPlayConfirmTransactionPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The entity ID.
            /// </summary>
            int32_t mEntityID;
        };
    }
}

#endif
