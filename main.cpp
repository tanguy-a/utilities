#include <iostream>
#include "Mediator.hpp"
#include "Agent.hpp"

using FunctionPtr = std::function<void(std::string const&)>;

int main() {
    std::string line;
    std::cout << "Get Line: "<< std::endl;
    std::getline(std::cin, line);

    IMediator *mediator = new Mediator();
    Agent agent("name", mediator);
    agent.sendPacket(line);
    Agent agentTwo("Executer", mediator);
    agentTwo.getMediator()->addReaction([](std::string s)->void{
        std::cout << "MediatorPacket: " << s << std::endl;
    });
    mediator->executeActions();
    mediator->flushPackets();
    return 0;
}