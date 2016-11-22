
/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#pragma once

#include "Afficheur.h"

class AfficheurTexte :
    public Afficheur
{
public:
    AfficheurTexte(Robot & robot);
    virtual ~AfficheurTexte();
    void update();
};

