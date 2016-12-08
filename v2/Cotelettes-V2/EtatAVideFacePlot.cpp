/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#include "EtatAVideFacePlot.h"
#include "EtatEnChargeFacePlot.h"
#include "EtatAVide.h"
#include "UnAuthorizedCallException.h"

//On instancie l'instance du singleton
EtatAVideFacePlot* EtatAVideFacePlot::instance = new EtatAVideFacePlot();

EtatAVideFacePlot* EtatAVideFacePlot::getInstance(){
    return EtatAVideFacePlot::instance;
}


EtatAVideFacePlot::EtatAVideFacePlot()
{
}


EtatAVideFacePlot::~EtatAVideFacePlot()
{
}

EtatRobot* EtatAVideFacePlot::saisir()
{
    //On passe � l'�tat en charge face plot
    return EtatEnChargeFacePlot::getInstance();
}

EtatRobot* EtatAVideFacePlot::tourner(std::string lastdirection, std::string nextdirection){
    if(lastdirection != nextdirection){
        return EtatAVide::getInstance();
    }
    return this;
}

EtatRobot* EtatAVideFacePlot::evaluerPlot(){
    return this;
}


std::string EtatAVideFacePlot::getName(){
    return "�tat � vide face � un plot";
}
