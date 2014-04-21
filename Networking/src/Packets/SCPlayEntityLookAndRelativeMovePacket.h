#ifndef SC_PLAY_ENTITY_LOOK_AND_RELATIVE_MOVE_H
#define SC_PLAY_ENTITY_LOOK_AND_RELATIVE_MOVE_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayEntityLookAndRelativeMovePacket : public Packet
        {
        public:
            SCPlayEntityLookAndRelativeMovePacket() : Packet(PacketType::SC_PLAY_ENTITY_LOOK_AND_RELATIVE_MOVE) { };
            SCPlayEntityLookAndRelativeMovePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

