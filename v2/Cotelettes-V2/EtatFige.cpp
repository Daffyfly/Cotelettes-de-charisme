/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#include "EtatFige.h"
#include "EtatEnRoute.h"

//On instancie l'instance du singleton
EtatFige* EtatFige::instance = new EtatFige();

EtatFige* EtatFige::getInstance(EtatEnRoute* ancien_etat){
    //On set l'ancien �tat avec celui qui nous est pass� en param�tre. On reviendra sur lui en appelant repartir()
    instance->setEtatEnRoute(ancien_etat);
    return instance;
}

EtatFige::EtatFige()
{
}

void EtatFige::setEtatEnRoute(EtatEnRoute* e){
    _ancien_etat = e;
}

EtatFige::~EtatFige()
{
}

EtatRobot* EtatFige::repartir()
{
    return _ancien_etat;
}

std::string EtatFige::getName(){
    return "�tat fig�";
}