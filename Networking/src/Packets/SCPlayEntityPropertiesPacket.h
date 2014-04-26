#ifndef SC_PLAY_ENTITY_PROPERTIES_H
#define SC_PLAY_ENTITY_PROPERTIES_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Contains an array of properties of an entity.
        /// </summary>
        class SCPlayEntityPropertiesPacket : public Packet
        {
        public:
            SCPlayEntityPropertiesPacket() : Packet(PacketType::SC_PLAY_ENTITY_PROPERTIES) { };
            SCPlayEntityPropertiesPacket(boost::asio::streambuf buffer);

            struct ModifierData
            {
                uint64_t mUUID[2];
                double mAmount;
                int8_t mOperation;
            };

            struct PropertyData
            {
                std::string mKey;
                double mValue;
                int16_t mListLength;
                std::vector<ModifierData> mModifiers;
            };
        };
    }
}

#endif

