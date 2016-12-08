/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#pragma once

#include "EtatEnRoute.h"

//Classe correspondant � l'�tat en charge face plot du robot
class EtatEnChargeFacePlot : public EtatEnRoute
{
private:
    //L'instance du singleton
    static EtatEnChargeFacePlot* instance;
    //Constructeur priv� conform�ment au design pattern de singleton
    EtatEnChargeFacePlot();

public:        
    //Pour pouvoir r�cup�rer l'instance du singleton
    static EtatEnChargeFacePlot* getInstance();
    virtual ~EtatEnChargeFacePlot();
    std::string getName();

    EtatRobot* tourner(std::string lastdirection, std::string nextdirection);
    EtatRobot* peser();
    EtatRobot* poser();
    EtatRobot* evaluerPlot();
};



