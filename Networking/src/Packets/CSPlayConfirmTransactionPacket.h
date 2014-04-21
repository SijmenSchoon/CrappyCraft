
#ifndef CS_PLAY_CONFIRM_TRANSACTION_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlayConfirmTransactionPacket : public Packet
        {
        public:
            CSPlayConfirmTransactionPacket() : Packet(PacketType::CS_PLAY_CONFIRM_TRANSACTION) { };
            CSPlayConfirmTransactionPacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

