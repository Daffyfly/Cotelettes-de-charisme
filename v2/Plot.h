/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#pragma once

//Classe représentant un plot avec lequel le robot peut entrer en contact
class Plot
{
    int _hauteur;

public:
    Plot(int hauteur);
    ~Plot();

    int getHauteur() const;
};

