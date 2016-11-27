/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#include "EtatEnCharge.h"

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

