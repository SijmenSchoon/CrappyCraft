
#ifndef SC_PLAY_SET_SLOT_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlaySetSlotPacket : public Packet
        {
        public:
            SCPlaySetSlotPacket() : Packet(PacketType::SC_PLAY_SET_SLOT) { };
            SCPlaySetSlotPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

