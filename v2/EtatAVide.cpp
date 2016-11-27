/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#include "EtatAVide.h"

//On instancie l'instance du singleton
EtatAVide* EtatAVide::instance = new EtatAVide();

EtatAVide* EtatAVide::getInstance(){
    return EtatAVide::instance;
}

EtatAVide::EtatAVide()
{
}


EtatAVide::~EtatAVide()
{
}

std::string EtatAVide::getName(){
    return "état à vide";
}