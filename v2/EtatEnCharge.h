/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#pragma once
#include "EtatEnRoute.h"

//Classe correspondant à l'état en charge du robot
class EtatEnCharge :
    public EtatEnRoute
{
private:
    //L'instance du singleton
    static EtatEnCharge* instance;
    //Constructeur privé conformément au design pattern de singleton
    EtatEnCharge();

public:
    //Pour pouvoir récupérer l'instance du singleton
    static EtatEnCharge* getInstance();
    virtual ~EtatEnCharge();
    std::string getName();
};

