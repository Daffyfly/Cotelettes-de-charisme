#pragma once
#include "EtatEnRoute.h"
class EtatEnCharge :
    public EtatEnRoute
{
public:
    EtatEnCharge();
    virtual ~EtatEnCharge();

    void avancer();
    void tourner();
    void peser();
    void rencontrerPlot();
};

