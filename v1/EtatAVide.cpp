#include "EtatAVide.h"

EtatAVide* EtatAVide::instance;

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