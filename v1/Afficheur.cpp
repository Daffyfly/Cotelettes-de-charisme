/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#include "Afficheur.h"
#include "Robot.h"

Afficheur::Afficheur(Robot & robot) : _robot(robot){
    //On ajoute l'afficheur lui-m�me au robot pass� en param�tre
    robot.attacher(this);
}

Afficheur::~Afficheur(){}

void Afficheur::update()
{

}