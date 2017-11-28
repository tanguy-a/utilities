//
// Created by Tanguy on 28/11/2017.
//

#include <iostream>
#include "Mediator.hpp"

void Mediator::addReaction(FunctionPtr const&function)
{
    actions.push_back(function);
}

void Mediator::addMediatorPacket(MediatorPacket const& _packet)
{
    mediatorPackets.push_back(_packet);
}

void Mediator::executeActions()
{
    for (auto &packet : mediatorPackets)
    {
        if (packet.getPacket() == "k")
        {
            for (auto &action : actions)
            {
                std::cout << "Calling action -- " << std::endl;
                action(packet.getPacket());
            }
        }
    }
}

void Mediator::flushPackets()
{
    mediatorPackets.empty();
}
