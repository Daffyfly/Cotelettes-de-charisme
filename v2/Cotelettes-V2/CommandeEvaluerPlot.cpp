#include "CommandeEvaluerPlot.h"

CommandeEvaluerPlot CommandeEvaluerPlot::maCommande((std::string)"EVALUERPLOT");

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
    _robot->evaluerPlot();
}
