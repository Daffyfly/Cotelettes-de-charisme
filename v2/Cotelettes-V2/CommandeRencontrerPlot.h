#pragma once
#include "CommandeRobot.h"
#include <string>
class CommandeRencontrerPlot :
    public CommandeRobot
{
    int taille;
protected:
    virtual Commande* constructeurVirtuel(Invocateur & i);

public:
    static CommandeRencontrerPlot maCommande;

    CommandeRencontrerPlot(Robot&, int);
    CommandeRencontrerPlot(std::string name): CommandeRobot(name){}
    virtual ~CommandeRencontrerPlot();
    virtual void executer();
    virtual void annuler();
};

