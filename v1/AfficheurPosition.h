#pragma once

#include "Afficheur.h"

class AfficheurPosition : public Afficheur{
public:
    AfficheurPosition(Robot & robot);
    virtual ~AfficheurPosition();
    void update();
};

