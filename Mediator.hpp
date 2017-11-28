//
// Created by Tanguy on 28/11/2017.
//

#ifndef MEDIATORPROJECT_MEDIATOR_HPP
#define MEDIATORPROJECT_MEDIATOR_HPP

#include <string>
#include <functional>
#include <list>
#include <vector>
#include "IMediator.hpp"

class Mediator : public IMediator {
    std::vector<FunctionPtr> actions;

    std::list<MediatorPacket> mediatorPackets;

public:
    Mediator(): actions(std::vector<FunctionPtr>()) {};
    Mediator(Mediator const&) = delete;
    Mediator& operator=(Mediator const&) = delete;
    ~Mediator() = default;

    void addReaction(FunctionPtr const&function) override ;
    void addMediatorPacket(MediatorPacket const&) override;
    void executeActions() override;
    void flushPackets() override;
};

#endif //MEDIATORPROJECT_MEDIATOR_HPP
