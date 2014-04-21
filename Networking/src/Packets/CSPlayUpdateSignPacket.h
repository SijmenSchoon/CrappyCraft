
#ifndef CS_PLAY_UPDATE_SIGN_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayUpdateSignPacket : public Packet
        {
        public:
            CSPlayUpdateSignPacket() : Packet(PacketType::CS_PLAY_UPDATE_SIGN) { };
            CSPlayUpdateSignPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

