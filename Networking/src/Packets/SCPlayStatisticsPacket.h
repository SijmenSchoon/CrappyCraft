#ifndef SC_PLAY_STATISTICS_H
#define SC_PLAY_STATISTICS_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        class SCPlayStatisticsPacket : public Packet
        {
        public:
            SCPlayStatisticsPacket() : Packet(PacketType::SC_PLAY_STATISTICS) { };
            SCPlayStatisticsPacket(boost::asio::streambuf buffer);

            struct Entry
            {
                /// <summary>
                ///     The name of the statistic. One of these values:
                ///     https://gist.github.com/thinkofdeath/a1842c21a0cf2e1fb5e0
                /// </summary>
                std::string mName;

                /// <summary>
                ///     The value to set it to.
                /// </summary>
                VarInt mValue;
            };

            /// <summary>
            ///     Amount of entries.
            /// </summary>
            VarInt mCount;

            /// <summary>
            ///     The entries (statistic names and their values, see Entry).
            /// </summary>
            Entry mEntries;
        };
    }
}

#endif

