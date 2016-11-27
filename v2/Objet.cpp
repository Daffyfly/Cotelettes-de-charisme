/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#include "Objet.h"


Objet::Objet(int poids) : _poids(poids)
{
}


Objet::~Objet()
{
}

int Objet::getPoids() const {
    return _poids;
}