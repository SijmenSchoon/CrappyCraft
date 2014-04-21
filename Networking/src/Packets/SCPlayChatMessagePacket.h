#ifndef SC_PLAY_CHAT_MESSAGE_H
#define SC_PLAY_CHAT_MESSAGE_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        class SCPlayChatMessagePacket : public Packet
        {
        public:
            SCPlayChatMessagePacket() : Packet(PacketType::SC_PLAY_CHAT_MESSAGE) { };
            SCPlayChatMessagePacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     JSON of the message sent by someone, see
            ///     http://gist.github.com/thinkofdeath/e882ce057ed83bac0a1c
            /// </summary>
            std::string mJSONData;
        };
    }
}

#endif

