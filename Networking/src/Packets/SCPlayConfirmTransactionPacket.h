
#ifndef SC_PLAY_CONFIRM_TRANSACTION_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class SCPlayConfirmTransactionPacket : public Packet
        {
        public:
            SCPlayConfirmTransactionPacket() : Packet(PacketType::SC_PLAY_CONFIRM_TRANSACTION) { };
            SCPlayConfirmTransactionPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

