#pragma once
#include "CommandeRobot.h"
#include <string>
class CommandeAvancer :
    public CommandeRobot
{
    int x,y;
    int lastx, lasty;
protected:
    virtual Commande* constructeurVirtuel(Invocateur & i);

public:
    static CommandeAvancer maCommande;

    CommandeAvancer(Robot&, int a, int b);
    CommandeAvancer(std::string name): CommandeRobot(name){}
    virtual ~CommandeAvancer();
    virtual void executer();
    virtual void annuler();

};

