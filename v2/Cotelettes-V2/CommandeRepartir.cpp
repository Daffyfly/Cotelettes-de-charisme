#include "CommandeRepartir.h"

CommandeRepartir CommandeRepartir::maCommande((std::string)"repartir");

CommandeRepartir::CommandeRepartir(Robot& robot ) :CommandeRobot(robot)
{
}


CommandeRepartir::~CommandeRepartir()
{
}

Commande* CommandeRepartir::constructeurVirtuel(Invocateur & i){
    return new CommandeRepartir(*i.getRobot());
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