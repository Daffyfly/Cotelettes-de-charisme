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
        _etat = _etat->saisir();
        _objet = &o;
    }
    catch (...)
    {

    }
}//saisir()

void Robot::figer()
{
    try
    {
        _etat = _etat->figer();
    }
    catch (...)
    {

    }
}//figer()


void Robot::repartir()
{
    try
    {
        _etat = _etat->repartir();
    }
    catch (...)
    {

    }
}//repartir()