#include "Plot.h"


Plot::Plot(int hauteur) : _hauteur(hauteur)
{
}


Plot::~Plot()
{
}

int Plot::getHauteur() const{
    return _hauteur;
}
