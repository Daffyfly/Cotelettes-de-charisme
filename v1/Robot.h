#pragma once


#include<string>
#include<vector>
#include "Position.h"
#include "Plot.h"
#include "Objet.h"
#include "EtatRobot.h"
#include "Afficheur.h"

using std::string;
using std::vector;

class Robot
{
private :
    string _direction;

    vector<Afficheur*> _Afficheurs;
    Position& _position;
    Plot* _plot;
    Objet* _objet;
    EtatRobot*  _etat;

    public:
        Robot(Position p);
        ~Robot();

        void figer();
        void repartir();
        void saisir(Objet &o);

        Position getPosition();

        //Fonctions Observable
        void attach(Afficheur* afficheur);
        void notify();


};

