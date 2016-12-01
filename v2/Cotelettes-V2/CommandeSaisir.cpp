#include "CommandeSaisir.h"

CommandeSaisir CommandeSaisir::maCommande((std::string)"saisir");

CommandeSaisir::CommandeSaisir(Robot& robot) :CommandeRobot(robot)
{
}

CommandeSaisir::~CommandeSaisir()
{
}

Commande* CommandeSaisir::constructeurVirtuel(Invocateur & i){
    return new CommandeSaisir(*i.getRobot());
}


void CommandeSaisir::executer()
{

}

void CommandeSaisir::annuler()
{

}