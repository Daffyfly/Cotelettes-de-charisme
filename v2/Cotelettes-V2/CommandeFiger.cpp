#include "CommandeFiger.h"

CommandeFiger CommandeFiger::maCommande((std::string)"FIGER");

CommandeFiger::CommandeFiger(Robot& robot) :CommandeRobot(robot)
{
}


CommandeFiger::~CommandeFiger()
{
}

Commande* CommandeFiger::constructeurVirtuel(Invocateur & i){
    Commande * tmp = new CommandeFiger(*i.getRobot());
    Commande::pileActions.push(tmp);
    return tmp;
}

void CommandeFiger::executer()
{
    _robot->figer();
}

void CommandeFiger::annuler()
{
    _robot->repartir();
}