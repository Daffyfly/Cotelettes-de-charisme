#pragma once
#include "CommandeRobot.h"
class CommandeAvancer :
    public CommandeRobot
{
public:
    CommandeAvancer(Robot&);
    virtual ~CommandeAvancer();
    virtual void executer();
    virtual void annuler();

};

