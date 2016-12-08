#pragma once
#include "CommandeRobot.h"
class CommandePeser :
    public CommandeRobot
{
protected:
    virtual Commande* constructeurVirtuel(Invocateur & i);

public:
    static CommandePeser maCommande;

    CommandePeser(Robot& robot);
    CommandePeser(std::string name): CommandeRobot(name){}
    virtual ~CommandePeser();
    virtual void executer();
};

