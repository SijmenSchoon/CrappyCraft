#ifndef SC_PLAY_COLLECT_ITEM_H
#define SC_PLAY_COLLECT_ITEM_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent by the server when someone picks up an item lying on the ground - its solo
        ///     purpose appears to be the animation of the item flying towards you. It doesn't
        ///     destroy the entity in the client memory, and it doesn't add it to the inventory.
        ///     The server only checks for items to be picked up after each Player Position
        ///     and Player Position and Look packet sent by the client.
        /// </summary>
        class SCPlayCollectItemPacket : public Packet
        {
        public:
            SCPlayCollectItemPacket() : Packet(PacketType::SC_PLAY_COLLECT_ITEM) { };
            SCPlayCollectItemPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The entity ID that has been collected.
            /// </summary>
            uint32_t mCollectedEntityID;

            /// <summary>
            ///     The entity ID of the entity that collected an item.
            /// </summary>
            uint32_t mCollectorEntityID;
        };
    }
}

#endif

