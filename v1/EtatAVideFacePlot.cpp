/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#include "EtatAVideFacePlot.h"
#include "EtatEnChargeFacePlot.h"

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
    //On passe à l'état en charge face plot
    return EtatEnChargeFacePlot::getInstance();
}

std::string EtatAVideFacePlot::getName(){
    return "état à vide face à un plot";
}
