#include "EtatFige.h"
#include "EtatEnRoute.h"

EtatFige::EtatFige(EtatEnRoute* e)
{
}


EtatFige::~EtatFige()
{
}

EtatEnRoute* EtatFige::repartir()
{
    return _e;
}
//repartir()