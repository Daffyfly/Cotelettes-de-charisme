/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#include "Afficheur.h"
#include "Robot.h"

Afficheur::Afficheur(Robot & robot) : robot(robot){
    robot.attach(this);
}

Afficheur::~Afficheur(){}

void Afficheur::update()
{

}