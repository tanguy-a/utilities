//
// Created by Tanguy on 28/11/2017.
//

#ifndef MEDIATORPROJECT_MEDIATORPACKET_HPP
#define MEDIATORPROJECT_MEDIATORPACKET_HPP

#include <string>

class MediatorPacket {

    std::string packet;

public:
    MediatorPacket() = default;
    MediatorPacket(std::string const&_packet): packet(_packet) {};
    MediatorPacket(MediatorPacket const&other): packet(other.packet) {};
    MediatorPacket& operator=(MediatorPacket const&) = delete;
    ~MediatorPacket() = default;

    inline MediatorPacket& operator<<(std::string const& _packet) {packet = _packet;};
    inline std::string const& getPacket() {return packet;};
    inline void setPacket(std::string const& _packet) {packet = _packet;};

    friend std::ostream& operator<<(std::ostream& os, const MediatorPacket& mediatorPacket);

};

#endif //MEDIATORPROJECT_MEDIATORPACKET_HPP
