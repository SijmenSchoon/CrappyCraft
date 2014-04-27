#ifndef SC_PLAY_PARTICLE_H
#define SC_PLAY_PARTICLE_H

#include "Packet.h"

namespace Networking
{
    namespace Packets
    {
        /// <summary>
        ///     Spawns the named variable.
        /// </summary>
        class SCPlayParticlePacket : public Packet
        {
        public:
            SCPlayParticlePacket() : Packet(PacketType::SC_PLAY_PARTICLE) { };
            SCPlayParticlePacket(boost::asio::streambuf buffer);

            /// <summary>
            ///     The name of the particles to create.
            /// </summary>
            std::string mParticleName;

            /// <summary>
            ///     The particles' reference X coordinate.
            /// </summary>
            float mX;

            /// <summary>
            ///     The particles' reference Y coordinate.
            /// </summary>
            float mY;

            /// <summary>
            ///     The particles' reference Z coordinate.
            /// </summary>
            float mZ;

            /// <summary>
            ///     Added to the reference X coordinate after multiplying
            ///     the value with a random gaussian value.
            /// </summary>
            float mOffsetX;

            /// <summary>
            ///     Added to the reference Y coordinate after multiplying
            ///     the value with a random gaussian value.
            /// </summary>
            float mOffsetY;

            /// <summary>
            ///     Added to the reference Z coordinate after multiplying
            ///     the value with a random gaussian value.
            /// </summary>
            float mOffsetZ;

            /// <summary>
            ///     The particles' data.
            /// </summary>
            float mParticleData;

            /// <summary>
            ///     The number of particles to create.
            /// </summary>
            int32_t mParticleCount;
        };
    }
}

#endif

