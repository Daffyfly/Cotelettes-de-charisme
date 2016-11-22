/*
@Authors : Vincent Raybaud & Rémy Kaloustian
*/

#pragma once
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

