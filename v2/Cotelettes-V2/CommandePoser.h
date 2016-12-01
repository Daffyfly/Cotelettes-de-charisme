#pragma once
#include "CommandeRobot.h"
#include <string>
class CommandePoser :
    public CommandeRobot
{
protected:
    virtual Commande* constructeurVirtuel(Invocateur & i);

public:
    static CommandePoser maCommande;

    CommandePoser(Robot& );
    CommandePoser(std::string name): CommandeRobot(name){}
    virtual ~CommandePoser();
    virtual void executer();
    virtual void annuler();
};

