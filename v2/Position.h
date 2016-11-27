/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#pragma once

//Classe représentant la position du robot
class Position
{
    int _x;
    int _y;

public:
    Position(int x, int y);
    ~Position();

    void setx(int x);
    void sety(int y);

    int getx() const;
    int gety() const;
};

