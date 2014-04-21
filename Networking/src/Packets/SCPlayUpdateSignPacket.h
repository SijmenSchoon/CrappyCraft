#ifndef SC_PLAY_UPDATE_SIGN_H
#define SC_PLAY_UPDATE_SIGN_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayUpdateSignPacket : public Packet
        {
        public:
            SCPlayUpdateSignPacket() : Packet(PacketType::SC_PLAY_UPDATE_SIGN) { };
            SCPlayUpdateSignPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

