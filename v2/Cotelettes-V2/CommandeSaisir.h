#pragma once
#include "CommandeRobot.h"
class CommandeSaisir :
    public CommandeRobot
{
public:
    CommandeSaisir(Robot&);
    virtual ~CommandeSaisir();
    virtual void executer();
    virtual void annuler();
};

