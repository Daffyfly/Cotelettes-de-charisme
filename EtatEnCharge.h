#pragma once
#include "EtatEnRoute.h"
class EtatEnCharge :
    public EtatEnRoute
{
public:
    EtatEnCharge();
    virtual ~EtatEnCharge();

    EtatRobot* avancer();
    EtatRobot* tourner();
    EtatRobot* peser();
    EtatRobot* rencontrerPlot();
};

