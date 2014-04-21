
#ifndef SC_PLAY_PLUGIN_MESSAGE_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayPluginMessagePacket : public Packet
        {
        public:
            SCPlayPluginMessagePacket() : Packet(PacketType::SC_PLAY_PLUGIN_MESSAGE) { };
            SCPlayPluginMessagePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

