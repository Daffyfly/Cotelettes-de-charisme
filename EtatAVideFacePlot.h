#pragma once
#include "EtatEnRoute.h"
class EtatAVideFacePlot :
    public EtatEnRoute
{
public:
    EtatAVideFacePlot();
    virtual ~EtatAVideFacePlot();

    void evaluerPlot();
    EtatRobot* saisir(); 
    void tourner();
};

