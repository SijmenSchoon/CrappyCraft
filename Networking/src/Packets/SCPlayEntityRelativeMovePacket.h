
#ifndef SC_PLAY_ENTITY_RELATIVE_MOVE_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayEntityRelativeMovePacket : public Packet
        {
        public:
            SCPlayEntityRelativeMovePacket() : Packet(PacketType::SC_PLAY_ENTITY_RELATIVE_MOVE) { };
            SCPlayEntityRelativeMovePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

