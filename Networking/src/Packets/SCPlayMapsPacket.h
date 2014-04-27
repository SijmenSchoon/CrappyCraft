#ifndef SC_PLAY_MAPS_H
#define SC_PLAY_MAPS_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        class SCPlayMapsPacket : public Packet
        {
        public:
            SCPlayMapsPacket() : Packet(PacketType::SC_PLAY_MAPS) { };
            SCPlayMapsPacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The damage value of the map being modified.
            /// </summary>
            VarInt mDamageValue;

            /// <summary>
            ///     Length of the data array.
            /// </summary>
            int16_t mLength;

            /// <summary>
            ///     Byte array with data for the map.
            ///     <para>
            ///         The first byte in the array identifies the data in the array:
            ///         <list type="bullet">
            ///             <item>
            ///                 0: The next two bytes are the X and Y start coordinates, followed
            ///                 by the data for the rest of the column.
            ///             </item>
            ///             <item>
            ///                 1: The rest of the bytes are in groups of three, with the data, X
            ///                 coordinate and the Y coordinate. The lower half of the data byte is
            ///                 the type (always 0 in vanilla) and the upper half is the direction.
            ///             </item>
            ///             <item>
            ///                 2: The second byte in the array is the scale of the map.
            ///             </item>
            /// </summary>
            std::vector<int8_t> mData;
        };
    }
}

#endif

