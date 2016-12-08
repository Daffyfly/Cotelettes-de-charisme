#pragma once
#include "CommandeRobot.h"
#include <string>
class CommandeSaisir :
    public CommandeRobot
{
    int poids;
protected:
    virtual Commande* constructeurVirtuel(Invocateur & i);
public:
    static CommandeSaisir maCommande;

    CommandeSaisir(Robot&, int);
    CommandeSaisir(std::string name) : CommandeRobot(name){}
    virtual ~CommandeSaisir();
    virtual void executer();
    virtual void annuler();
};

