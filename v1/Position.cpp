/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#include "Position.h"
#include "UnAuthorizedCallException.h"

Position::Position(int x, int y) : _x(x), _y(y)
{
    std::cout << "x = " << _x << " ,, y = " << _y << "\n";
}


Position::~Position()
{
}

int Position::getx() const
{
    return _x;
}

int Position::gety() const
{
    return _y;
}
