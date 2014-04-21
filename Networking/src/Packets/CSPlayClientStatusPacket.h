
#ifndef CS_PLAY_CLIENT_STATUS_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayClientStatusPacket : public Packet
        {
        public:
            CSPlayClientStatusPacket() : Packet(PacketType::CS_PLAY_CLIENT_STATUS) { };
            CSPlayClientStatusPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

