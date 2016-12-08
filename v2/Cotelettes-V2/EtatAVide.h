
/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/
#pragma once
#include "EtatEnRoute.h"

//Classe corespondant � l'�tat � vide du robot
class EtatAVide :
    public EtatEnRoute
{
private:
    //L'instance du singleton
    static EtatAVide* instance;
    //Constructeur priv� conform�ment au design pattern de singleton
    EtatAVide();

public:    
    //Pour pouvoir r�cup�rer l'instance du singleton
    EtatRobot* avancer();
    EtatRobot* rencontrerPlot();

    static EtatAVide* getInstance();
    virtual ~EtatAVide();
    std::string getName();
};

