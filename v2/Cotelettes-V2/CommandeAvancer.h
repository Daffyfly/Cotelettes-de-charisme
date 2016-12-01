#pragma once
#include "CommandeRobot.h"
#include <string>
class CommandeAvancer :
    public CommandeRobot
{
protected:
    virtual Commande* constructeurVirtuel(Invocateur & i);

public:
    static CommandeAvancer maCommande;

    CommandeAvancer(Robot&);
    CommandeAvancer(std::string name): CommandeRobot(name){}
    virtual ~CommandeAvancer();
    virtual void executer();
    virtual void annuler();

};

