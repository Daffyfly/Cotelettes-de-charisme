//
// Created by vincent on 15/11/16.
//

#pragma once

class AfficheurObjet : public Afficheur{
public:
    AfficheurObjet(Robot & robot);
    virtual ~AfficheurObjet();
    void update();
};

