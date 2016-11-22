/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#include "EtatFige.h"
#include "EtatEnRoute.h"

EtatFige* EtatFige::instance = new EtatFige();

EtatFige* EtatFige::getInstance(EtatEnRoute* e){
    instance->setEtatEnRoute(e);
    return instance;
}

EtatFige::EtatFige()
{
}

void EtatFige::setEtatEnRoute(EtatEnRoute* e){
    _e = e;
}

EtatFige::~EtatFige()
{
}

EtatRobot* EtatFige::repartir()
{
    return _e;
}

std::string EtatFige::getName(){
    return "état figé";
}