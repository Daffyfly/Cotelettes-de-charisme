#include "CommandeFiger.h"

CommandeFiger CommandeFiger::maCommande((std::string)"figer");

CommandeFiger::CommandeFiger(Robot& robot) :CommandeRobot(robot)
{
}


CommandeFiger::~CommandeFiger()
{
}

Commande* CommandeFiger::constructeurVirtuel(Invocateur & i){
    return new CommandeFiger(*i.getRobot());
}

void CommandeFiger::executer()
{
    _robot->figer();
}

void CommandeFiger::annuler()
{
    _robot->repartir();
}