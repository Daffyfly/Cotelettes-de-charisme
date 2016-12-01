#include "CommandePoser.h"

CommandePoser CommandePoser::maCommande((std::string)"poser");

CommandePoser::CommandePoser(Robot& robot) :CommandeRobot(robot)
{
}


CommandePoser::~CommandePoser()
{
}

Commande* CommandePoser::constructeurVirtuel(Invocateur & i){
    return new CommandePoser(*i.getRobot());
}


void CommandePoser::executer()
{
}

void CommandePoser::annuler()
{

}