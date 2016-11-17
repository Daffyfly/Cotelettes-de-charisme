#include "EtatAVideFacePlot.h"
#include "EtatEnChargeFacePlot.h"

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
    return EtatEnChargeFacePlot::getInstance();
}

std::string EtatAVideFacePlot::getName(){
    return "état à vide face à un plot";
}
