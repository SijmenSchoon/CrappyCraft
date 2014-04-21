#ifndef SC_PLAY_ENTITY_EQUIPMENT_H
#define SC_PLAY_ENTITY_EQUIPMENT_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayEntityEquipmentPacket : public Packet
        {
        public:
            SCPlayEntityEquipmentPacket() : Packet(PacketType::SC_PLAY_ENTITY_EQUIPMENT) { };
            SCPlayEntityEquipmentPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

