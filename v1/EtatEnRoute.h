/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#pragma once

#include "EtatRobot.h"

class EtatEnRoute :
    public EtatRobot
{
public:
    EtatEnRoute();
    virtual ~EtatEnRoute();

    EtatRobot* figer();
};