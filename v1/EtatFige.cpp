/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#include "EtatFige.h"
#include "EtatEnRoute.h"

//On instancie l'instance du singleton
EtatFige* EtatFige::instance = new EtatFige();

EtatFige* EtatFige::getInstance(EtatEnRoute* e){
    //On set l'ancien �tat avec celui qui nous est pass� en param�tre. On reviendra sur lui en appelant repartir()
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
    return "�tat fig�";
}