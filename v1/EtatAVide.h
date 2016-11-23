
/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/
#pragma once
#include "EtatEnRoute.h"

//Classe corespondant à l'état à vide du robot
class EtatAVide :
    public EtatEnRoute
{
private:
    //L'instance du singleton
    static EtatAVide* instance;
    //Constructeur privé conformément au design pattern de singleton
    EtatAVide();

public:    
    //Pour pouvoir récupérer l'instance du singleton
    static EtatAVide* getInstance();
    virtual ~EtatAVide();
    std::string getName();
};

