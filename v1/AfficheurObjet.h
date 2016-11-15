#pragma once

#include "Afficheur.h"

class AfficheurObjet : public Afficheur{
public:
    AfficheurObjet(Robot & robot);
    virtual ~AfficheurObjet();
    void update();
};

