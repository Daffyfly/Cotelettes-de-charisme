#include "CommandeTourner.h"
#include "Invocateur.h"

CommandeTourner CommandeTourner::maCommande((std::string)"tourner");

CommandeTourner::CommandeTourner(Robot& robot) :CommandeRobot(robot)
{
}


CommandeTourner::~CommandeTourner()
{
}

Commande* CommandeTourner::constructeurVirtuel(Invocateur & i){
    return new CommandeTourner(*i.getRobot());
}

void CommandeTourner::executer()
{

}


void CommandeTourner::annuler()
{

}