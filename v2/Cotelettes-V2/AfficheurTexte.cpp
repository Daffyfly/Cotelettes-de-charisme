/*
@Authors : Vincent Raybaud & Rémy Kaloustian
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
    cout << "Etat actuel après action : " << _robot.getEtat()->getName() <<".\n";
    cout << "Position : (" << _robot.getPosition().getx() << "," << _robot.getPosition().gety() << ")\n";
    cout << "Direction : " << _robot.getDirection() << "\n";
    Objet* obj = _robot.getObjet();
    cout << "Poids de l'objet : ";
    if (obj!= nullptr){
        cout << obj->getPoids();
    }
    else{
        cout << "pas d'objet tenu";
    }
    cout << "\n";
    Plot* plot = 
        _robot.getPlot();
    cout << "Hauteur du plot : ";
    if (plot != nullptr){
        cout << plot->getHauteur();
    }
    else{
        cout << "pas de plot en face";
    }
    cout << "\n";
}
