/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

class Robot;

#pragma once
#include <iostream>
//L'afficheur de base est une classe absraite car on ne l'instanciera jamais
class Afficheur{
protected :
    Robot & _robot;
public:
    //On passe le robot en param�tre pour conna�tre les informations � afficher
    //On utilise une r�f�rence pour pouvoir ex�cuter update sans repasser le Robot, 
    //la r�f�rence permet de prendre en compte les modifications appliqu�es au robot.
    Afficheur(Robot & robot);
    virtual ~Afficheur();
    //Une classe abstraite, donc = 0
    virtual void update() = 0;
};

