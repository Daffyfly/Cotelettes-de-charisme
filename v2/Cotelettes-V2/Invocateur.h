#pragma once

#include "Commande.h"
#include "Robot.h"
#include <string>

class Invocateur
{
private:
    Robot * _robot;
public:
    Invocateur(Robot & robot, std::string file);
    ~Invocateur();
    int getInt();
    Robot * getRobot();
};

