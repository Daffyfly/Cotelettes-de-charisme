#include "Robot.h"


Robot::Robot()
{
}


Robot::~Robot()
{
}

void Robot::saisir(Objet &o)
{
    try
    {
        _etat = _etat.saisir();
        _objet = &o;
    }
    catch (...)
    {

    }
}
