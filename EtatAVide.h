#pragma once
#include "EtatEnRoute.h"
class EtatAVide :
    public EtatEnRoute
{
public:
    EtatAVide();
    virtual ~EtatAVide();
    EtatRobot* avancer();
    EtatRobot* tourner();
    EtatRobot* rencontrerPlot();
};

