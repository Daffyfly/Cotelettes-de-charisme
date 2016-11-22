/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#include "EtatEnRoute.h"
#include "EtatFige.h"


EtatEnRoute::EtatEnRoute()
{
}


EtatEnRoute::~EtatEnRoute()
{
}

EtatRobot* EtatEnRoute::figer()
{
    return EtatFige::getInstance(this);
}