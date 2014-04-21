
#ifndef SC_STATUS_RESPONSE_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCStatusResponsePacket : public Packet
        {
        public:
            SCStatusResponsePacket() : Packet(PacketType::SC_STATUS_RESPONSE) { };
            SCStatusResponsePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

