/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#pragma once

#include "EtatRobot.h"
#include "EtatEnRoute.h"

class EtatFige :
    public EtatRobot
{
private:
    EtatEnRoute* _e;
    static EtatFige* instance;

    EtatFige();
public:
    static EtatFige* getInstance(EtatEnRoute * e);
    void setEtatEnRoute(EtatEnRoute* e);
    virtual ~EtatFige();

    EtatRobot* repartir();

    std::string getName();

};

