#include "CommandeAvancer.h"

CommandeAvancer CommandeAvancer::maCommande((std::string)"avancer");

CommandeAvancer::CommandeAvancer(Robot& robot, int a, int b) :CommandeRobot(robot), x(a), y(b)
{
}

CommandeAvancer::~CommandeAvancer()
{
}

Commande* CommandeAvancer::constructeurVirtuel(Invocateur & i){
    //demander à la prof
    Commande * tmp = new CommandeAvancer(*i.getRobot(), i.getInt(), i.getInt());
    Commande::pileActions.push(tmp);
    return tmp;
}

void CommandeAvancer::executer()
{
    lastx=_robot->getPosition().getx();
    lasty=_robot->getPosition().gety();
    _robot->avancer(x,y);
}

void CommandeAvancer::annuler()
{
    _robot->avancer(lastx,lasty);
}