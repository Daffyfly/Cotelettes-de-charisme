#pragma once

#include "EtatEnRoute.h"
class EtatEnChargeFacePlot : public EtatEnRoute
{
public:
    EtatEnChargeFacePlot();
    virtual ~EtatEnChargeFacePlot();

    EtatRobot* peser();
    EtatRobot* evaluerPlot();
    EtatRobot* poser();
    EtatRobot* tourner();
};



