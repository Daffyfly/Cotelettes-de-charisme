#pragma once


#include<string>

#include "Position.h"
#include "Plot.h"
#include "Objet.h"
#include "EtatRobot.h"
using std::string;

class Robot
{
private :
    string _direction;

    Position& _position;
    Plot* _plot;
    Objet* _objet;
    EtatRobot*  _etat;//Maybe need to put this as a reference

    public:
        Robot(Position p);
        ~Robot();

        void avancer(int x, int y);
        void tourner(string direction);
        void saisir(Objet &o);
        void poser();
        int peser();
        void rencontretPlot(Plot p);
        int evaluerPlot();
        void figer();
        void repartir();
        void afficher();

};

