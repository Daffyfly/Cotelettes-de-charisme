/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#pragma once
#include "EtatEnRoute.h"

//Classe correspondant � l'�tat en charge du robot
class EtatEnCharge :
    public EtatEnRoute
{
private:
    //L'instance du singleton
    static EtatEnCharge* instance;
    //Constructeur priv� conform�ment au design pattern de singleton
    EtatEnCharge();

public:
    //Pour pouvoir r�cup�rer l'instance du singleton
    static EtatEnCharge* getInstance();
    virtual ~EtatEnCharge();
    std::string getName();

    EtatRobot * rencontrerPlot();
    EtatRobot * avancer();
    EtatRobot* peser();
    EtatRobot* poser();
};

