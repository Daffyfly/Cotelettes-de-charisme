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
    return "�tat en charge face � un plot";
}