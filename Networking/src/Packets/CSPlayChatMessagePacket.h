
#ifndef CS_PLAY_CHAT_MESSAGE_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayChatMessagePacket : public Packet
        {
        public:
            CSPlayChatMessagePacket() : Packet(PacketType::CS_PLAY_CHAT_MESSAGE) { };
            CSPlayChatMessagePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

