/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#include "Robot.h"
#include "EtatAVide.h"
#include "UnAuthorizedCallException.h"

Robot::Robot(Position p, string direction) :_etat(EtatAVide::getInstance()), _position(p), _direction(direction)
{
    //Setting pointer attributes to nullptr
    _plot = nullptr;
    _objet = nullptr;
}


Robot::~Robot()
{
}


//Pour les fonctions suivantes, il se peut que l'état du robot ne permette pas d'appeler la méthode, d'où la gestion d'exception
void Robot::saisir(Objet &o)
{
    try
    {
        _etat = _etat->saisir();
        _objet = &o;
        notifier();
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
        notifier();
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
        notifier();
    }
    catch (UnAuthorizedCallException e)
    {
        cerr << e.what() << "\n";
    }
}//repartir()

//Ajouter un afficheur pour le robot
void Robot::attacher(Afficheur * afficheur)
{
    _Afficheurs.push_back(afficheur);
}

//Mettre à jour les afficheurs
void Robot::notifier(){
    for(Afficheur * afficheur : _Afficheurs)
    {
        //On appelle update() de chaque afficheur attaché
        afficheur->update();
    }
}

#pragma region SETTERS_&_GETTERS
Position Robot::getPosition()
{
    return _position;
}

EtatRobot* Robot::getEtat(){
    return _etat;
}

string Robot::getDirection(){
    return _direction;
}

Objet* Robot::getObjet(){
    return _objet;
}

Plot* Robot::getPlot(){
    return _plot;
}
#pragma endregion