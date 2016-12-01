#include "CommandePeser.h"

CommandePeser CommandePeser::maCommande((std::string)"peser");

CommandePeser::CommandePeser(Robot& robot) :CommandeRobot(robot)
{
}


CommandePeser::~CommandePeser()
{
}

Commande* CommandePeser::constructeurVirtuel(Invocateur & i){
    return new CommandePeser(*i.getRobot());
}

void CommandePeser::executer()
{

}

void CommandePeser::annuler()
{

}