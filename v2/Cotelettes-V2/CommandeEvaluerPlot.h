#pragma once
#include "CommandeRobot.h"
class CommandeEvaluerPlot:public CommandeRobot
{
public:
    CommandeEvaluerPlot(Robot& robot);
    virtual ~CommandeEvaluerPlot();
    virtual void executer();
    virtual void annuler();
};

