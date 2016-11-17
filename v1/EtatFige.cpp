#include "EtatFige.h"
#include "EtatEnRoute.h"

EtatFige EtatFige::instance;

EtatFige EtatFige::getInstance(EtatEnRoute* e){
    instance.setEtatEnRoute(e);
    return EtatFige::instance;
}

EtatFige::EtatFige()
{
}

void EtatFige::setEtatEnRoute(EtatEnRoute* e){

}

EtatFige::~EtatFige()
{
}

EtatRobot* EtatFige::repartir()
{
    return _e;
}
//repartir()