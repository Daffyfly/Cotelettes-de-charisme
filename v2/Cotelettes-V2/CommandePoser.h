#pragma once
#include "CommandeRobot.h"
class CommandePoser :
    public CommandeRobot
{
public:
    CommandePoser(Robot& );
    virtual ~CommandePoser();
    virtual void executer();
    virtual void annuler();
};

