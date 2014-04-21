#ifndef SC_PLAY_ENTITY_EQUIPMENT_H
#define SC_PLAY_ENTITY_EQUIPMENT_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        class SCPlayEntityEquipmentPacket : public Packet
        {
        public:
            SCPlayEntityEquipmentPacket() : Packet(PacketType::SC_PLAY_ENTITY_EQUIPMENT) { };
            SCPlayEntityEquipmentPacket(boost::asio::streambuf buffer);

            enum class EquipmentSlot : int16_t
            {
                HELD        = 0,
                BOOTS       = 1,
                LEGGINGS    = 2,
                CHESTPLATE  = 3,
                HELMET      = 4
            };

            /// <summary>
            ///     The entity ID of the entity equipped with the item.
            /// </summary>
            int32_t mEntityID;

            /// <summary>
            ///     The slot the item is in.
            /// </summary>
            EquipmentSlot mSlot;

            /// <summary>
            ///     The item equipped.
            /// </summary>
            Slot    mItem;
        };
    }
}

#endif

