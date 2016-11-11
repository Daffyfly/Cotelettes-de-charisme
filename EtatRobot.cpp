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

EtatFige* EtatRobot::figer()
{
    UnAuthorizedCallException myex;
    throw myex;
}

EtatEnRoute* EtatRobot::repartir()
{
    UnAuthorizedCallException myex;
    throw myex;
}
