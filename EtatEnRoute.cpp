#include "EtatEnRoute.h"


EtatEnRoute::EtatEnRoute()
{
}


EtatEnRoute::~EtatEnRoute()
{
}

EtatFige* EtatEnRoute::figer()
{
    return new EtatFige(this);
}