#ifndef CS_PLAY_TAB_COMPLETE_H
#define CS_PLAY_TAB_COMPLETE_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayTabCompletePacket : public Packet
        {
        public:
            CSPlayTabCompletePacket() : Packet(PacketType::CS_PLAY_TAB_COMPLETE) { };
            CSPlayTabCompletePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

