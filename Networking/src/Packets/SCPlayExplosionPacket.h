
#ifndef SC_PLAY_EXPLOSION_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayExplosionPacket : public Packet
        {
        public:
            SCPlayExplosionPacket() : Packet(PacketType::SC_PLAY_EXPLOSION) { };
            SCPlayExplosionPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

