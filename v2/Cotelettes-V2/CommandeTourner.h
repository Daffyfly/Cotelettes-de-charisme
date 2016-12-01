#pragma once
#include "CommandeRobot.h"
#include "Invocateur.h"
#include <string>
class CommandeTourner :
    public CommandeRobot
{
protected:
    virtual Commande* constructeurVirtuel(Invocateur & i);

public:
    static CommandeTourner maCommande;

    CommandeTourner(Robot&);
    CommandeTourner(std::string name) : CommandeRobot(name){}
    virtual ~CommandeTourner();
    virtual void executer();
    virtual void annuler();
};

