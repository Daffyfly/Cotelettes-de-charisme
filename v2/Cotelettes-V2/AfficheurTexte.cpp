/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#include "AfficheurTexte.h"
#include "Robot.h"
#include <iostream>

using std::cout;

AfficheurTexte::AfficheurTexte(Robot & robot) : Afficheur(robot)
{
}


AfficheurTexte::~AfficheurTexte()
{
}

void AfficheurTexte::update(){
    cout << "Infos Robot:\n";
    cout << "Etat actuel apr�s action : " << _robot.getEtat()->getName() <<".\n";
    cout << "Position : (" << _robot.getPosition().getx() << "," << _robot.getPosition().gety() << ")\n";
    cout << "Direction : " << _robot.getDirection() << "\n";
    Objet* obj = _robot.getObjet();
    if (obj!= nullptr){

        cout << "Poids de l'objet : "<< obj->getPoids()<<"\n";
    }
    Plot* plot = _robot.getPlot();
    if (plot != nullptr){
        cout << "Hauteur du plot : "<< plot->getHauteur()<<"\n";
    }
    cout<<"\n";
}
