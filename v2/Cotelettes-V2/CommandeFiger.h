#pragma once
#include "CommandeRobot.h"
#include <string>
class CommandeFiger :
    public CommandeRobot
{
protected:
    virtual Commande* constructeurVirtuel(Invocateur & i);

public:
    static CommandeFiger maCommande;

    CommandeFiger(Robot&);
    CommandeFiger(std::string name): CommandeRobot(name){}
    virtual ~CommandeFiger();
    virtual void executer();
    virtual void annuler();
};

