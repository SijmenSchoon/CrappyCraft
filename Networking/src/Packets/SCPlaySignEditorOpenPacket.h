#ifndef SC_PLAY_SIGN_EDITOR_OPEN_H
#define SC_PLAY_SIGN_EDITOR_OPEN_H

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlaySignEditorOpenPacket : public Packet
        {
        public:
            SCPlaySignEditorOpenPacket() : Packet(PacketType::SC_PLAY_SIGN_EDITOR_OPEN) { };
            SCPlaySignEditorOpenPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

