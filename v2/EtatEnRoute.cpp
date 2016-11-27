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
    //Tous les états en route pevent appeler figer()
    //On retourne un état figé, en lui passant l'état courant (nécessaire pour pouvoir revenir à l'ancien état depuis repartir())
    return EtatFige::getInstance(this);
}