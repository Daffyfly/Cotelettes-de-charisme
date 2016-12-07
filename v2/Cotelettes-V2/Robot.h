/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

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

//Classe repr�sentant le robot
class Robot
{
private :
#pragma region FIELDS
    string _direction;
    vector<Afficheur*> _Afficheurs;
    Position _position;
    Plot* _plot;
    Objet* _objet;
    EtatRobot*  _etat;
#pragma endregion

    public:
#pragma region METHODS
        //On prend une copie de la position pour que le robot soit respinsable de la dur�e de vie de sa position
        Robot(Position p, string direction);
        ~Robot();

        void figer();
        void repartir();
        void saisir(Objet &o);
        void avancer(int x, int y);

        Position getPosition();
        EtatRobot* getEtat();
        string getDirection();
        Objet* getObjet();
        Plot* getPlot();        

        //Fonctions pour l'afficheur (Pattern Observateur)
        void attacher(Afficheur* afficheur);
        void notifier();

#pragma endregion
};

