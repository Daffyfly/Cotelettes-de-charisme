/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#pragma once

//Classe repr�sentant un plot avec lequel le robot peut entrer en contact
class Plot
{
    int _hauteur;

public:
    Plot(int hauteur);
    ~Plot();

    int getHauteur() const;
};

