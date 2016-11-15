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
    EtatRobot*  _etat;

    public:
        Robot(Position p);
        ~Robot();

        virtual void avancer(int x, int y);
        virtual void tourner(string direction);
        virtual void saisir(Objet &o);
        virtual void poser();
        virtual int peser();
        virtual void rencontretPlot(Plot p);
        virtual int evaluerPlot();
        virtual void figer();
        virtual void repartir();
        virtual void afficher();

};

