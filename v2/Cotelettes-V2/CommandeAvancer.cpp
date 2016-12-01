#include "CommandeAvancer.h"

CommandeAvancer CommandeAvancer::maCommande((std::string)"avancer");

CommandeAvancer::CommandeAvancer(Robot& robot) :CommandeRobot(robot)
{
}

CommandeAvancer::~CommandeAvancer()
{
}

Commande* CommandeAvancer::constructeurVirtuel(Invocateur & i){
    return new CommandeAvancer(*i.getRobot());
}

void CommandeAvancer::executer()
{

}

void CommandeAvancer::annuler()
{

}