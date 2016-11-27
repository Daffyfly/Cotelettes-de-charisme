#pragma once
#include "CommandeRobot.h"
class CommandeTourner :
    public CommandeRobot
{
public:
    CommandeTourner(Robot&);
    virtual ~CommandeTourner();
    virtual void executer();
    virtual void annuler();
};

