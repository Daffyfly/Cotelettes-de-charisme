//
// Created by vincent on 15/11/16.
//

#pragma once


class Afficheur {
private :
    Robot & robot;
public:
    Afficheur(Robot & robot);
    virtual ~Afficheur();
    virtual void update();
};

