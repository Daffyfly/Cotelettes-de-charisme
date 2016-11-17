#include "EtatEnCharge.h"

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
    return "état en charge";
}

