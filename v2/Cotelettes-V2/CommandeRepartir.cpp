#include "CommandeRepartir.h"

CommandeRepartir CommandeRepartir::maCommande((std::string)"REPARTIR");

CommandeRepartir::CommandeRepartir(Robot& robot ) :CommandeRobot(robot)
{
}


CommandeRepartir::~CommandeRepartir()
{
}

Commande* CommandeRepartir::constructeurVirtuel(Invocateur & i){
    Commande * tmp = new CommandeRepartir(*i.getRobot());
    Commande::pileActions.push(tmp);
    return tmp;
}

void CommandeRobot::executer(){}
void CommandeRobot::annuler(){}


void CommandeRepartir::executer()
{
    _robot->repartir();
}

void CommandeRepartir::annuler()
{
    _robot->figer();
}