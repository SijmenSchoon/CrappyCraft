#ifndef SC_PLAY_DESTROY_ENTITIES_H
#define SC_PLAY_DESTROY_ENTITIES_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Sent by the server when a list of Entities is to be destroyed by the client.
        /// </summary>
        class SCPlayDestroyEntitiesPacket : public Packet
        {
        public:
            SCPlayDestroyEntitiesPacket() : Packet(PacketType::SC_PLAY_DESTROY_ENTITIES) { };
            SCPlayDestroyEntitiesPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The length of the entity array.
            /// </summary>
            int8_t mCount;

            /// <summary>
            ///     The list of entities to be destroyed.
            /// </summary>
            std::vector<int32_t> mEntityIDs;
        };
    }
}

#endif

