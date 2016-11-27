/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

class Robot;

#pragma once
#include <iostream>
//L'afficheur de base est une classe absraite car on ne l'instanciera jamais
class Afficheur{
protected :
    Robot & _robot;
public:
    //On passe le robot en paramètre pour connaître les informations à afficher
    //On utilise une référence pour pouvoir exécuter update sans repasser le Robot, 
    //la référence permet de prendre en compte les modifications appliquées au robot.
    Afficheur(Robot & robot);
    virtual ~Afficheur();
    //Une classe abstraite, donc = 0
    virtual void update() = 0;
};

