/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#pragma once

//Classe représentant un objet saisissable par le robot
class Objet
{
    int _poids;

public:
    Objet(int poids);
    ~Objet();

    int getPoids() const;
};

