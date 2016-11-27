
/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#pragma once
#include "EtatEnRoute.h"

//Classe correspondant à l'état à vide face plot du robot
class EtatAVideFacePlot :
    public EtatEnRoute
{
private:
    //L'instance du singleton
    static EtatAVideFacePlot* instance;
    //Constructeur privé conformément au design pattern de singleton
    EtatAVideFacePlot();

public:
    //Pour pouvoir récupérer l'instance du singleton
    static EtatAVideFacePlot* getInstance();
    virtual ~EtatAVideFacePlot();
    EtatRobot* saisir();
    std::string getName();
};

