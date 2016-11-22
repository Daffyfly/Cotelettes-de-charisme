/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#pragma once

#include <string>

class EtatRobot
{
public:
    EtatRobot();
    virtual ~EtatRobot();
    
    virtual EtatRobot* saisir() ;
    virtual EtatRobot* figer();
    virtual EtatRobot* repartir();

    virtual std::string getName() = 0;

};

