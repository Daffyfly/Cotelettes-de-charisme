#include "CommandeEvaluerPlot.h"

CommandeEvaluerPlot CommandeEvaluerPlot::maCommande((std::string)"evaluerplot");

CommandeEvaluerPlot::CommandeEvaluerPlot(Robot& robot) :CommandeRobot(robot)
{
}


CommandeEvaluerPlot::~CommandeEvaluerPlot()
{
}

Commande* CommandeEvaluerPlot::constructeurVirtuel(Invocateur & i){
    return new CommandeEvaluerPlot(*i.getRobot());
}

void CommandeEvaluerPlot::executer()
{

}

void CommandeEvaluerPlot::annuler()
{

}
