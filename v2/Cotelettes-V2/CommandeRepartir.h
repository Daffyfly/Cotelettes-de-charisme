#pragma once
#include "CommandeRobot.h"
class CommandeRepartir :
    public CommandeRobot
{
public:
    CommandeRepartir(Robot& robot);
    virtual ~CommandeRepartir();
    virtual void executer();
    virtual void annuler();
};

