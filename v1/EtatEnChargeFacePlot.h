/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#pragma once

#include "EtatEnRoute.h"
class EtatEnChargeFacePlot : public EtatEnRoute
{
private:
    static EtatEnChargeFacePlot* instance;

    EtatEnChargeFacePlot();
public:
        
    static EtatEnChargeFacePlot* getInstance();
    virtual ~EtatEnChargeFacePlot();

    std::string getName();
};



