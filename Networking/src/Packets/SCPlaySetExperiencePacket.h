
#ifndef SC_PLAY_SET_EXPERIENCE_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlaySetExperiencePacket : public Packet
        {
        public:
            SCPlaySetExperiencePacket() : Packet(PacketType::SC_PLAY_SET_EXPERIENCE) { };
            SCPlaySetExperiencePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

