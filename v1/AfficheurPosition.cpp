#include "AfficheurPosition.h"
#include "Robot.h"

AfficheurPosition::AfficheurPosition(Robot & robot) : Afficheur(robot){}

AfficheurPosition::~AfficheurPosition(){}

void AfficheurPosition::update()
{
    std::cout<<"Position = ("<<robot.getPosition().getx()<<","<<robot.getPosition().gety()<<")\n";
}