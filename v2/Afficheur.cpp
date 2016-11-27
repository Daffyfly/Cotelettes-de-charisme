/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#include "Afficheur.h"
#include "Robot.h"

Afficheur::Afficheur(Robot & robot) : _robot(robot){
    //On ajoute l'afficheur lui-même au robot passé en paramètre
    robot.attacher(this);
}

Afficheur::~Afficheur(){}

void Afficheur::update()
{

}