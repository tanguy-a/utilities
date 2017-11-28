//
// Created by Tanguy on 28/11/2017.
//

#ifndef MEDIATORPROJECT_AGENT_HPP
#define MEDIATORPROJECT_AGENT_HPP

#include "IMediator.hpp"
#include "MediatorPacket.hpp"

class Agent {

    std::string name;
    IMediator *mediator;

public:
    Agent(std::string const& _name, IMediator *_mediator):
            name(_name), mediator(_mediator) {};
    ~Agent() = default;

    IMediator *getMediator() {return mediator;};

    void sendPacket(std::string const& _mediatorPacket) {
        MediatorPacket mediatorPacket(_mediatorPacket);
        mediator->addMediatorPacket(mediatorPacket);
    };
};

#endif //MEDIATORPROJECT_AGENT_HPP
