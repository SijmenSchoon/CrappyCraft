#ifndef SC_PLAY_ENTITY_VELOCITY_H
#define SC_PLAY_ENTITY_VELOCITY_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayEntityVelocityPacket : public Packet
        {
        public:
            SCPlayEntityVelocityPacket() : Packet(PacketType::SC_PLAY_ENTITY_VELOCITY) { };
            SCPlayEntityVelocityPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

