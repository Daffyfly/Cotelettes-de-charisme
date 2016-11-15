#include "EtatAVideFacePlot.h"
#include "EtatEnChargeFacePlot.h"

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
