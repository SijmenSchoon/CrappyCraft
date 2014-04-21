
#ifndef CS_PLAY_CLIENT_SETTINGS_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayClientSettingsPacket : public Packet
        {
        public:
            CSPlayClientSettingsPacket() : Packet(PacketType::CS_PLAY_CLIENT_SETTINGS) { };
            CSPlayClientSettingsPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

