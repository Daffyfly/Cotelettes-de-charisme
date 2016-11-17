#pragma once
#include "EtatEnRoute.h"
class EtatAVideFacePlot :
    public EtatEnRoute
{
private:
    static EtatAVideFacePlot* instance;

    EtatAVideFacePlot();
public:
    static EtatAVideFacePlot* getInstance();
    virtual ~EtatAVideFacePlot();

    EtatRobot* saisir();

    std::string getName();
};

