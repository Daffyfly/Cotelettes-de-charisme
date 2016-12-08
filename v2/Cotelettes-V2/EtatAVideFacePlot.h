
/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#pragma once
#include "EtatEnRoute.h"

//Classe correspondant � l'�tat � vide face plot du robot
class EtatAVideFacePlot :
    public EtatEnRoute
{
private:
    //L'instance du singleton
    static EtatAVideFacePlot* instance;
    //Constructeur priv� conform�ment au design pattern de singleton
    EtatAVideFacePlot();

public:
    //Pour pouvoir r�cup�rer l'instance du singleton
    static EtatAVideFacePlot* getInstance();
    virtual ~EtatAVideFacePlot();
    EtatRobot* saisir();
    std::string getName();

    EtatRobot* tourner(std::string lastdirection, std::string nextdirection);
    EtatRobot* evaluerPlot();
};

