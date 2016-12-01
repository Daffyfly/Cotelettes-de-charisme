#pragma once
#include "CommandeRobot.h"
#include <string>
class CommandeRepartir :
    public CommandeRobot
{
protected:
    virtual Commande* constructeurVirtuel(Invocateur & i);

public:
    static CommandeRepartir maCommande;

    CommandeRepartir(Robot& robot);
    CommandeRepartir(std::string name): CommandeRobot(name){}
    virtual ~CommandeRepartir();
    virtual void executer();
    virtual void annuler();
};

