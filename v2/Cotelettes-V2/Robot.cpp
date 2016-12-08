/*
@Authors : Vincent Raybaud & R�my Kaloustian
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


//Pour les fonctions suivantes, il se peut que l'�tat du robot ne permette pas d'appeler la m�thode, d'o� la gestion d'exception
void Robot::saisir(Objet *o)
{
    try
    {
        _etat = _etat->saisir();
        _objet = o;
        notifier();
    }
    catch (UnAuthorizedCallException e)
    {
        cerr << e.what()<<"\n";
    }
}//saisir()

void Robot::poser()
{
    try
    {
        _etat = _etat->poser();
        delete _objet;
        _objet=nullptr;
        notifier();
    }
    catch (UnAuthorizedCallException e)
    {
        cerr << e.what()<<"\n";
    }
}

void Robot::avancer(int x, int y)
{
    try
    {
        _etat=_etat->avancer();
        _position.setx(x);
        _position.sety(y);
        notifier();
    }
    catch(UnAuthorizedCallException e)
    {
        cerr << e.what() <<"\n";
    }
}

void Robot::evaluerPlot()
{
    try
    {
        _etat=_etat->evaluerPlot();
        notifier();
    }
    catch(UnAuthorizedCallException e)
    {
        cerr << e.what() <<"\n";
    }
}

void Robot::rencontrerPlot(Plot * p)
{
    try
    {
        _etat=_etat->rencontrerPlot();
        _plot=p;
        notifier();
    }
    catch(UnAuthorizedCallException e)
    {
        cerr << e.what() <<"\n";
    }
}



void Robot::tourner(string direction)
{
    try
    {
        _etat=_etat->tourner(_direction,direction);
        if(_direction!=direction){
            delete _plot;
            _plot=nullptr;
        }
        _direction=direction;
        notifier();
    }
    catch(UnAuthorizedCallException e)
    {
        cerr << e.what() <<"\n";
    }

}

void Robot::peser()
{
    try
    {
        _etat=_etat->peser();
        notifier();
    }
    catch(UnAuthorizedCallException e)
    {
        cerr << e.what() <<"\n";
    }

}

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

//Mettre � jour les afficheurs
void Robot::notifier(){
    for(Afficheur * afficheur : _Afficheurs)
    {
        //On appelle update() de chaque afficheur attach�
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

void Robot::setPlot(Plot * p){
    delete _plot;
    _plot=p;
}
#pragma endregion