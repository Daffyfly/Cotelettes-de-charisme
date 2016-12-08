/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#include "EtatAVide.h"
#include "EtatAVideFacePlot.h"

//On instancie l'instance du singleton
EtatAVide* EtatAVide::instance = new EtatAVide();

EtatAVide* EtatAVide::getInstance(){
    return EtatAVide::instance;
}

EtatAVide::EtatAVide()
{
}


EtatAVide::~EtatAVide()
{
}

std::string EtatAVide::getName(){
    return "�tat � vide";
}

EtatRobot* EtatAVide::avancer(){
    return this;
}

EtatRobot* EtatAVide::rencontrerPlot(){
    return EtatAVideFacePlot::getInstance();
}