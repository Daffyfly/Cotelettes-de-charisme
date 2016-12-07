/*
@Authors : Vincent Raybaud & R�my Kaloustian
*/

#include "Position.h"
#include "UnAuthorizedCallException.h"

Position::Position(int x, int y) : _x(x), _y(y)
{
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

void Position::setx(int x)
{
    _x=x;
}

void Position::sety(int y)
{
    _y=y;
}

