/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#pragma once

//Classe repr�sentant la position du robot
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

