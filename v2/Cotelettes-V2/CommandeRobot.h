#pragma once
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
};

