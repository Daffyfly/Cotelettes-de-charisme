/*
@Authors : Vincent Raybaud & R�my Kaloustian
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
    //Tous les �tats en route pevent appeler figer()
    //On retourne un �tat fig�, en lui passant l'�tat courant (n�cessaire pour pouvoir revenir � l'ancien �tat depuis repartir())
    return EtatFige::getInstance(this);
}

EtatRobot* EtatEnRoute::tourner(std::string lastdirection, std::string nextdirection){
    return this;
}