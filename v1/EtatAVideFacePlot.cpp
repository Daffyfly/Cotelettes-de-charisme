#include "EtatAVideFacePlot.h"
#include "EtatEnChargeFacePlot.h"

EtatAVideFacePlot EtatAVideFacePlot::instance;

EtatAVideFacePlot EtatAVideFacePlot::getInstance(){
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
    return new EtatEnChargeFacePlot();
}
