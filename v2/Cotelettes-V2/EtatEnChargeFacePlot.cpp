/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#include "EtatEnChargeFacePlot.h"
#include "EtatEnRoute.h"
#include "UnAuthorizedCallException.h"
#include "EtatAVide.h"
#include "EtatEnCharge.h"
#include "EtatAVideFacePlot.h"

//On instancie l'instance du singleton
EtatEnChargeFacePlot* EtatEnChargeFacePlot::instance = new EtatEnChargeFacePlot();

EtatEnChargeFacePlot* EtatEnChargeFacePlot::getInstance(){
    return EtatEnChargeFacePlot::instance;
}

EtatEnChargeFacePlot::EtatEnChargeFacePlot()
{
}


EtatEnChargeFacePlot::~EtatEnChargeFacePlot()
{
}

EtatRobot* EtatEnChargeFacePlot::tourner(string lastdirection, string nextdirection)
{
    if(lastdirection != nextdirection){
        return EtatEnCharge::getInstance();
    }
    return this;
}

EtatRobot* EtatEnChargeFacePlot::peser(){
    return this;
}

EtatRobot* EtatEnChargeFacePlot::poser(){
    return EtatAVideFacePlot::getInstance();
}

EtatRobot* EtatEnChargeFacePlot::evaluerPlot(){
    return this;
}


std::string EtatEnChargeFacePlot::getName(){
    return "�tat en charge face � un plot";
}