#ifndef SC_PLAY_USE_BED_H
#define SC_PLAY_USE_BED_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayUseBedPacket : public Packet
        {
        public:
            SCPlayUseBedPacket() : Packet(PacketType::SC_PLAY_USE_BED) { };
            SCPlayUseBedPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

