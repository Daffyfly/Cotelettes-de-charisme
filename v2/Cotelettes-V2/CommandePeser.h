#pragma once
#include "CommandeRobot.h"
class CommandePeser :
    public CommandeRobot
{
public:
    CommandePeser(Robot& robot);
    virtual ~CommandePeser();
    virtual void executer();
    virtual void annuler();
};

