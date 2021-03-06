#ifndef PACKET_H
#define PACKET_H

#include <boost/asio/streambuf.hpp>
#include <cstdint>
#include <string>
#include "PacketType.h"
#include "../VarInt.h"

namespace Networking
{
    namespace Packets
    {
        class Packet
        {
        public:
            Packet();
            Packet(PacketType type);
            Packet(boost::asio::streambuf buffer);
            ~Packet();

            PacketType mType;
        };
    }
}

#endif
