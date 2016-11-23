/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#pragma once

#include "EtatEnRoute.h"

//Classe correspondant à l'état en charge face plot du robot
class EtatEnChargeFacePlot : public EtatEnRoute
{
private:
    //L'instance du singleton
    static EtatEnChargeFacePlot* instance;
    //Constructeur privé conformément au design pattern de singleton
    EtatEnChargeFacePlot();

public:        
    //Pour pouvoir récupérer l'instance du singleton
    static EtatEnChargeFacePlot* getInstance();
    virtual ~EtatEnChargeFacePlot();
    std::string getName();
};



