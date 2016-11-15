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
    return new EtatFige(this);
}