#include "EtatRobot.h"
#include "UnAuthorizedCallException.h"

EtatRobot::EtatRobot()
{
}


EtatRobot::~EtatRobot()
{
}

EtatRobot EtatRobot::saisir()
{
    UnAuthorizedCallException myex;
    throw myex;
}
