#pragma once
#include "CommandeRobot.h"
#include "Invocateur.h"
#include <string>
class CommandeTourner :
    public CommandeRobot
{
    string _direction;
    string _lastdirection;
protected:
    virtual Commande* constructeurVirtuel(Invocateur & i);

public:
    static CommandeTourner maCommande;

    CommandeTourner(Robot&, string direction);
    CommandeTourner(std::string name) : CommandeRobot(name){}
    virtual ~CommandeTourner();
    virtual void executer();
    virtual void annuler();
};

