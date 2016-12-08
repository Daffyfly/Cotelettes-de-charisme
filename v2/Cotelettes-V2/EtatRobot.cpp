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

EtatRobot* EtatRobot::rencontrerPlot()
{
    UnAuthorizedCallException myex;
    throw myex;
}

EtatRobot* EtatRobot::peser()
{
    UnAuthorizedCallException myex;
    throw myex;
}

EtatRobot* EtatRobot::poser()
{
    UnAuthorizedCallException myex;
    throw myex;
}
EtatRobot* EtatRobot::evaluerPlot(){
    UnAuthorizedCallException myex;
    throw myex;
}


EtatRobot* EtatRobot::tourner(string lastdirection, string nextdirection)
{
    UnAuthorizedCallException myex;
    throw myex;
}