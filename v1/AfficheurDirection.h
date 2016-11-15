#pragma once

#include "Afficheur.h"

class AfficheurDirection : public Afficheur {
public:
    AfficheurDirection(Robot & robot);
    virtual ~AfficheurDirection();
    void update();
};

