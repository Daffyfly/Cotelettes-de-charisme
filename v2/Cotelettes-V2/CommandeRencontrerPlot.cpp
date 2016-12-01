#include "CommandeRencontrerPlot.h"

CommandeRencontrerPlot CommandeRencontrerPlot::maCommande((std::string)"rencontrerplot");

CommandeRencontrerPlot::CommandeRencontrerPlot(Robot& robot) :CommandeRobot(robot)
{
}


CommandeRencontrerPlot::~CommandeRencontrerPlot()
{
}

Commande* CommandeRencontrerPlot::constructeurVirtuel(Invocateur & i){
    return new CommandeRencontrerPlot(*i.getRobot());
}


void CommandeRencontrerPlot::executer()
{

}

void CommandeRencontrerPlot::annuler()
{

}