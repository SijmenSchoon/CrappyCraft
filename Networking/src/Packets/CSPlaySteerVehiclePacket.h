
#ifndef CS_PLAY_STEER_VEHICLE_H
#define 

#include Packet.h

namespace Networking
{
    namespace Packets
    {
        class CSPlaySteerVehiclePacket : public Packet
        {
        public:
            CSPlaySteerVehiclePacket() : Packet(PacketType::CS_PLAY_STEER_VEHICLE) { };
            CSPlaySteerVehiclePacket(boost::asio::streambuf buffer);
        };
    }
}

#endif

