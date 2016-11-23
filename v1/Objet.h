/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#pragma once

//Classe repr�sentant un objet saisissable par le robot
class Objet
{
    int _poids;

public:
    Objet(int poids);
    ~Objet();

    int getPoids() const;
};

