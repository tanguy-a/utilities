//
// Created by Tanguy on 28/11/2017.
//

#ifndef MEDIATORPROJECT_IMEDIATOR_HPP
#define MEDIATORPROJECT_IMEDIATOR_HPP

#include "MediatorPacket.hpp"

class IMediator {
public:
    using FunctionPtr = std::function<void(std::string const&)>;

    virtual void addReaction(FunctionPtr const&function) = 0;
    virtual void addMediatorPacket(MediatorPacket const&) = 0;
    virtual void executeActions() = 0;
    virtual void flushPackets() = 0;
};

#endif //MEDIATORPROJECT_IMEDIATOR_HPP
