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