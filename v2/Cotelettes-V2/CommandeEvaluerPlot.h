#pragma once
#include "CommandeRobot.h"
#include <string>
class CommandeEvaluerPlot:public CommandeRobot
{
protected:
    virtual Commande* constructeurVirtuel(Invocateur & i);

public:
    static CommandeEvaluerPlot maCommande;

    CommandeEvaluerPlot(Robot& robot);
    CommandeEvaluerPlot(std::string name): CommandeRobot(name){}
    virtual ~CommandeEvaluerPlot();
    virtual void executer();
    virtual void annuler();
};

