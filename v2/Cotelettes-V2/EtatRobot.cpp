/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#include "EtatRobot.h"
#include "UnAuthorizedCallException.h"

EtatRobot::EtatRobot()
{
}


EtatRobot::~EtatRobot()
{
}
//Toutes les m�thodes retournent une exception. Ce choix est expliqu� plus end �tails dans le rapport (partie sur l'�tat qui est un �tat)

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

EtatRobot* EtatRobot::avancer()
{
    UnAuthorizedCallException myex;
    throw myex;
}