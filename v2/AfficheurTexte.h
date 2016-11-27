
/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#pragma once

#include "Afficheur.h"

//La classe d'afficheur concret qui affichera les informations du robot
class AfficheurTexte :
    public Afficheur
{
public:
    AfficheurTexte(Robot & robot);
    virtual ~AfficheurTexte();
    void update();
};

