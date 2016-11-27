#pragma once
#include <map>
#include "Commande.h"
#include "Robot.h"
class CommandeRobot :
    public Commande
{
protected:
    Robot* _robot;


public:
    CommandeRobot(Robot& robot);
    virtual ~CommandeRobot();
    Commande* constructeurVirtuel();
    virtual void executer() = 0;
    virtual void annuler() = 0;

    static  std::map<string, Commande*> commandesInscrites;
    static Commande* nouvelleCommande(string);

};

