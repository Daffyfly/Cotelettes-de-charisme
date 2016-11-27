/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#include "EtatRobot.h"
#include "UnAuthorizedCallException.h"

EtatRobot::EtatRobot()
{
}


EtatRobot::~EtatRobot()
{
}
//Toutes les méthodes retournent une exception. Ce choix est expliqué plus end étails dans le rapport (partie sur l'état qui est un État)

EtatRobot* EtatRobot::saisir()
{
    UnAuthorizedCallException myex;
    throw myex;
}

EtatRobot* EtatRobot::figer()
{
    UnAuthorizedCallException myex;
    throw myex;
}

EtatRobot* EtatRobot::repartir()
{
    UnAuthorizedCallException myex;
    throw myex;
}