#pragma once
#include "CommandeRobot.h"
class CommandeRencontrerPlot :
    public CommandeRobot
{
public:
    CommandeRencontrerPlot(Robot& );
    virtual ~CommandeRencontrerPlot();
    virtual void executer();
    virtual void annuler();
};

