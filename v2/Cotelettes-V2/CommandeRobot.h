#pragma once
#include <map>
#include <string>
#include "Commande.h"
#include "Robot.h"
#include "Invocateur.h"

class CommandeRobot :
    public Commande
{
protected:
    Robot* _robot;
    virtual Commande* constructeurVirtuel(Invocateur & i) = 0;

public:
    CommandeRobot(Robot& robot);
    CommandeRobot(std::string name);
    virtual ~CommandeRobot();
    virtual void executer();
    virtual void annuler();
};

