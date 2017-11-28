//
// Created by Tanguy on 28/11/2017.
//

#include "MediatorPacket.hpp"

std::ostream& operator<<(std::ostream& os, const MediatorPacket& mediatorPacket)
{
    os << mediatorPacket.packet;
    return os;
}
