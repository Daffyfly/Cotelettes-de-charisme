#pragma once
#include "EtatRobot.h"
class EtatFige :
    public EtatRobot
{
    EtatEnRoute* _e;

public:
    EtatFige(EtatEnRoute* e);
    virtual ~EtatFige();

    EtatEnRoute* repartir();

};

