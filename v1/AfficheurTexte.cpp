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
    cout << "Etat actuel après action : " << robot.getEtat()->getName() <<".\n";
    cout << "Position : (" << robot.getPosition().getx() << "," << robot.getPosition().gety() << ")\n";
    cout << "Direction : " << robot.getDirection() << "\n";
    Objet* obj = robot.getObjet();
    cout << "Poids de l'objet : ";
    if (obj!= nullptr){
        cout << obj->getPoids();
    }
    else{
        cout << "pas d'objet tenu";
    }
    cout << "\n";
    Plot* plot = 
        robot.getPlot();
    cout << "Hauteur du plot : ";
    if (plot != nullptr){
        cout << plot->getHauteur();
    }
    else{
        cout << "pas de plot en face";
    }
    cout << "\n";
}
