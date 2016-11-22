/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

class Robot;

#pragma once
#include <iostream>

class Afficheur{
protected :
    Robot & robot;
public:
    Afficheur(Robot & robot);
    virtual ~Afficheur();
    virtual void update();
};

