#ifndef CS_PLAY_PLUGIN_MESSAGE_H
#define CS_PLAY_PLUGIN_MESSAGE_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayPluginMessagePacket : public Packet
        {
        public:
            CSPlayPluginMessagePacket() : Packet(PacketType::CS_PLAY_PLUGIN_MESSAGE) { };
            CSPlayPluginMessagePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

