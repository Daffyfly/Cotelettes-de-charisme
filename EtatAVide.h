#pragma once
#include "EtatEnRoute.h"
class EtatAVide :
    public EtatEnRoute
{
public:
    EtatAVide();
    virtual ~EtatAVide();
    void avancer();
    void tourner();
    void rencontrerPlot();
};

