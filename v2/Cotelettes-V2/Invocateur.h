#pragma once

#include "Commande.h"
#include "Robot.h"
#include <string>
#include <fstream>

class Invocateur
{
private:
    std::ifstream _f;
    Robot * _robot;
public:
    Invocateur(Robot & robot, std::string file);
    ~Invocateur();
    int getInt();
    string getString();
    Robot * getRobot();
};

