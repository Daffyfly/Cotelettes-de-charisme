#include "EtatFige.h"
#include "EtatEnRoute.h"

EtatFige::EtatFige(EtatEnRoute* e)
{
}


EtatFige::~EtatFige()
{
}

EtatRobot* EtatFige::repartir()
{
    return _e;
}
//repartir()