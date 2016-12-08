#include "CommandeTourner.h"
#include "Invocateur.h"

CommandeTourner CommandeTourner::maCommande((std::string)"TOURNER");

CommandeTourner::CommandeTourner(Robot& robot, string direction) :CommandeRobot(robot) , _direction(direction)
{
}


CommandeTourner::~CommandeTourner()
{
}

Commande* CommandeTourner::constructeurVirtuel(Invocateur & i){
    Commande * tmp = new CommandeTourner(*i.getRobot(), i.getString());
    Commande::pileActions.push(tmp);
    return tmp;
}

void CommandeTourner::executer()
{
    _lastdirection=_robot->getDirection();
    _robot->tourner(_direction);
}


void CommandeTourner::annuler()
{
    _robot->tourner(_lastdirection);
}