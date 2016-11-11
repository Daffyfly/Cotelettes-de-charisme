#pragma once
class Position
{
    int _x;
    int _y;


public:
    Position();
    ~Position();

    void setx(int x);
    void sety(int y);

    int getx() const;
    int gety() const;
};

