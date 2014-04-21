#ifndef SC_PLAY_PARTICLE_H
#define SC_PLAY_PARTICLE_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayParticlePacket : public Packet
        {
        public:
            SCPlayParticlePacket() : Packet(PacketType::SC_PLAY_PARTICLE) { };
            SCPlayParticlePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif
