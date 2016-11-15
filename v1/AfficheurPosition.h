//
// Created by vincent on 15/11/16.
//
#pragma once

class AfficheurPosition : public Afficheur{
public:
    AfficheurPosition(Robot & robot);
    virtual ~AfficheurPosition();
    void update();
};

