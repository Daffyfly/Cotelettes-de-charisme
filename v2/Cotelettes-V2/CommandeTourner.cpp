#include "CommandeTourner.h"
#include "Invocateur.h"

CommandeTourner CommandeTourner::maCommande((std::string)"tourner");

CommandeTourner::CommandeTourner(Robot& robot, string direction) :CommandeRobot(robot) , _direction(direction)
{
    _lastdirection = _robot->getDirection();
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

}


void CommandeTourner::annuler()
{
}