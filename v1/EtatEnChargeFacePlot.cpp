#include "EtatEnChargeFacePlot.h"
#include "EtatEnRoute.h"

EtatEnChargeFacePlot* EtatEnChargeFacePlot::instance;

EtatEnChargeFacePlot* EtatEnChargeFacePlot::getInstance(){
    return EtatEnChargeFacePlot::instance;
}

EtatEnChargeFacePlot::EtatEnChargeFacePlot()
{
}


EtatEnChargeFacePlot::~EtatEnChargeFacePlot()
{
}

std::string EtatEnChargeFacePlot::getName(){
    return "état en charge face à un plot";
}