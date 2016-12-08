/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#include "EtatEnCharge.h"
#include "EtatEnChargeFacePlot.h"
#include "EtatAVide.h"

//On instancie l'instance du singleton
EtatEnCharge* EtatEnCharge::instance = new EtatEnCharge();

EtatEnCharge* EtatEnCharge::getInstance(){
    return EtatEnCharge::instance;
}

EtatEnCharge::EtatEnCharge()
{
}


EtatEnCharge::~EtatEnCharge()
{
}

std::string EtatEnCharge::getName(){
    return "�tat en charge";
}

EtatRobot* EtatEnCharge::rencontrerPlot(){
    return EtatEnChargeFacePlot::getInstance();
}

EtatRobot* EtatEnCharge::avancer(){
    return this;
}

EtatRobot* EtatEnCharge::peser(){
    return this;
}

EtatRobot* EtatEnCharge::poser(){
    return EtatAVide::getInstance();
}

