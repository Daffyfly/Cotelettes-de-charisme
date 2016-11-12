#pragma once
#include "EtatRobot.h"
#include "EtatFige.h"
class EtatEnRoute :
    public EtatRobot
{
public:
    EtatEnRoute();
    virtual ~EtatEnRoute();

    EtatFige* figer();
};