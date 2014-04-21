#ifndef SC_PLAY_TIME_UPDATE_H
#define SC_PLAY_TIME_UPDATE_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Time is based on ticks, of which 20 happen every second. There are 24,000 ticks in a
        ///     day, making Minecraft days exactly 20 minutes long. The time of day is based on the
        ///     timestamp modulo 240000. 0 marks the start of sunrine, 6000 of noon, 12000 of sunset
        ///     and 18000 of midnight. The default server increments the time by 20 every second.
        /// </summary>
        class SCPlayTimeUpdatePacket : public Packet
        {
        public:
            SCPlayTimeUpdatePacket() : Packet(PacketType::SC_PLAY_TIME_UPDATE) { };
            SCPlayTimeUpdatePacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The age of the world in ticks, not changed by /time set.
            /// </summary>
            int64_t mWorldAge;

            /// <summary>
            ///     The world time in ticks. If negative, the sun will stop moving at Math.abs() of
            ///     that time.
            /// </summary>
            int64_t mTimeOfDay;
        };
    }
}

#endif

