/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#pragma once

#include "EtatRobot.h"
#include "EtatEnRoute.h"

//Classe correspondant à l'état figé du robot
class EtatFige :
    public EtatRobot
{
private:
    //Pour conserver l'état du robot avant qu'il se fige.
    //On utilise un pointeur CAAAAARRRRRR
    EtatEnRoute* _ancien_etat;
    //L'instance du singleton
    static EtatFige* instance;
    //Constructeur privé conformément au design pattern de singleton
    EtatFige();

public:
    //Pour pouvoir récupérer l'instance du singleton
    static EtatFige* getInstance(EtatEnRoute * ancien_etat);
    void setEtatEnRoute(EtatEnRoute* ancien_etat);
    virtual ~EtatFige();
    EtatRobot* repartir();
    std::string getName();

};

