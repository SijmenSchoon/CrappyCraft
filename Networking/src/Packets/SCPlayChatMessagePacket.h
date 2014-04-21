
#ifndef SC_PLAY_CHAT_MESSAGE_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayChatMessagePacket : public Packet
        {
        public:
            SCPlayChatMessagePacket() : Packet(PacketType::SC_PLAY_CHAT_MESSAGE) { };
            SCPlayChatMessagePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

