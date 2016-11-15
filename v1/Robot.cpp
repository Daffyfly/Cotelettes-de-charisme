#include "Robot.h"
#include "EtatAVide.h"
#include "UnAuthorizedCallException.h"

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
    catch (UnAuthorizedCallException e)
    {
        cerr << e.what()<<"\n";
    }
}//saisir()

void Robot::figer()
{
    try
    {
        _etat = _etat->figer();
    }
    catch (UnAuthorizedCallException e)
    {
        cerr << e.what() << "\n";
    }
}//figer()


void Robot::repartir()
{
    try
    {
        _etat = _etat->repartir();
    }
    catch (UnAuthorizedCallException e)
    {
        cerr << e.what() << "\n";
    }
}//repartir()