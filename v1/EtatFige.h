/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#pragma once

#include "EtatRobot.h"
#include "EtatEnRoute.h"

//Classe correspondant � l'�tat fig� du robot
class EtatFige :
    public EtatRobot
{
private:
    //Pour conserver l'�tat du robot avant qu'il se fige.
    //On utilise un pointeur CAAAAARRRRRR
    EtatEnRoute* _e;
    //L'instance du singleton
    static EtatFige* instance;
    //Constructeur priv� conform�ment au design pattern de singleton
    EtatFige();

public:
    //Pour pouvoir r�cup�rer l'instance du singleton
    static EtatFige* getInstance(EtatEnRoute * e);
    void setEtatEnRoute(EtatEnRoute* e);
    virtual ~EtatFige();
    EtatRobot* repartir();
    std::string getName();

};

