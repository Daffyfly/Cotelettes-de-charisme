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

        void figer();
        void repartir();
        void saisir(Objet &o);


};

