#pragma once


#include<string>
using std::string;

class Robot
{
private :
    string _direction;

    Position& _position;
    Plot* _plot;
    Objet* _objet;

    public:
        Robot();
        ~Robot();

        void avancer(int x, int y);
        void tourner(string direction);
        void saisir(Objet o);
        void poser();
        int peser();
        void rencontretPlot(Plot p);
        int evaluerPlot();
        void figer();
        void repartir();
        void afficher();

};

