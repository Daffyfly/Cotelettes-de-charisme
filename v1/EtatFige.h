#pragma once

#include "EtatRobot.h"
#include "EtatEnRoute.h"

class EtatFige :
    public EtatRobot
{
    EtatEnRoute* _e;

public:
    EtatFige(EtatEnRoute* e);
    virtual ~EtatFige();

    EtatRobot* repartir();

};

