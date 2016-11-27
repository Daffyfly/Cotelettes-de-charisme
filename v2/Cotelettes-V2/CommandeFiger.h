#pragma once
#include "CommandeRobot.h"
class CommandeFiger :
    public CommandeRobot
{
public:
    CommandeFiger(Robot&);
    virtual ~CommandeFiger();
    virtual void executer();
    virtual void annuler();
};

