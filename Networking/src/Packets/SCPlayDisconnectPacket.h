
#ifndef SC_PLAY_DISCONNECT_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayDisconnectPacket : public Packet
        {
        public:
            SCPlayDisconnectPacket() : Packet(PacketType::SC_PLAY_DISCONNECT) { };
            SCPlayDisconnectPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

