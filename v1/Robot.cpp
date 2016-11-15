#include "Robot.h"
#include "EtatAVide.h"

Robot::Robot(Position p) :_etat(new EtatAVide()), _position(p)
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