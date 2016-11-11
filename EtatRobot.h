#pragma once

#include "EtatFige.h"
#include "EtatEnRoute.h"

class EtatRobot
{
public:
    EtatRobot();
    virtual ~EtatRobot();

    void avancer();
    void tourner();
    void evaluerPlot();
    void poser();
    EtatRobot* saisir() ;
    void  peser();
    EtatFige* figer();
    void rencontrerPlot();
    EtatEnRoute* repartir();

};

