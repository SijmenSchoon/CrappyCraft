#ifndef SC_PLAY_TAB_COMPLETE_H
#define SC_PLAY_TAB_COMPLETE_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayTabCompletePacket : public Packet
        {
        public:
            SCPlayTabCompletePacket() : Packet(PacketType::SC_PLAY_TAB_COMPLETE) { };
            SCPlayTabCompletePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

