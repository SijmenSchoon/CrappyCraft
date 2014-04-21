
#ifndef CS_STATUS_REQUEST_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSStatusRequestPacket : public Packet
        {
        public:
            CSStatusRequestPacket() : Packet(PacketType::CS_STATUS_REQUEST) { };
            CSStatusRequestPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

