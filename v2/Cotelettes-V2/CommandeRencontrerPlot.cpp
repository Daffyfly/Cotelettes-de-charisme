#include "CommandeRencontrerPlot.h"
#include "CommandePoser.h"

CommandeRencontrerPlot CommandeRencontrerPlot::maCommande((std::string)"RENCONTRERPLOT");

CommandeRencontrerPlot::CommandeRencontrerPlot(Robot& robot, int taille) :CommandeRobot(robot), taille(taille)
{
}


CommandeRencontrerPlot::~CommandeRencontrerPlot()
{
}

Commande* CommandeRencontrerPlot::constructeurVirtuel(Invocateur & i){
    return new CommandeRencontrerPlot(*i.getRobot(), i.getInt());
}


void CommandeRencontrerPlot::executer()
{
    _robot->rencontrerPlot(new Plot(taille));
}

void CommandeRencontrerPlot::annuler()
{
}