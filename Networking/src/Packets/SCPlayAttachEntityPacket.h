#ifndef SC_PLAY_ATTACH_ENTITY_H
#define SC_PLAY_ATTACH_ENTITY_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayAttachEntityPacket : public Packet
        {
        public:
            SCPlayAttachEntityPacket() : Packet(PacketType::SC_PLAY_ATTACH_ENTITY) { };
            SCPlayAttachEntityPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif
