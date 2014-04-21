#ifndef SC_PLAY_PLAYER_POSITION_AND_LOOK_PACKET_H
#define SC_PLAY_PLAYER_POSITION_AND_LOOK_PACKET_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        class SCPlayPlayerPositionAndLook : public Packet
        {
        public:
            SCPlayPlayerPositionAndLook() : Packet(PacketType::SC_PLAY_PLAYER_POSITION_AND_LOOK) { };
        };
    }
}

#endif
