#ifndef SC_PLAY_CHANGE_GAME_STATE_H
#define SC_PLAY_CHANGE_GAME_STATE_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        class SCPlayChangeGameStatePacket : public Packet
        {
        public:
            SCPlayChangeGameStatePacket() : Packet(PacketType::SC_PLAY_CHANGE_GAME_STATE) { };
            SCPlayChangeGameStatePacket(boost::asio::streambuf buffer);

            enum class Reason : uint8_t
            {
                INVALID_BED         = 0,
                END_RAINING         = 1,
                BEGIN_RAINING       = 2,
                CHANGE_GAMEMODE     = 3,
                ENTER_CREDITS       = 4,
                DEMO_MESSAGES       = 5,
                ARROW_HIT_PLAYER    = 6,
                FADE_VALUE          = 7,
                FADE_TIME           = 8
            };

            Reason mReason;
            float mValue;
        };
    }
}

#endif

