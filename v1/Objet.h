/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#pragma once
class Objet
{
    int _poids;

public:
    Objet(int poids);
    ~Objet();

    int getPoids() const;
};

