#include "coord.h"

Coord::Coord()
{
    x = 0;
    y = 0;
}

Coord::Coord(const char &x, const char &y)
{
    this->x = x;
    this->y = y;
}

bool Coord::operator==(const Coord &coord_in) const
{
    if((x == coord_in.x) && (y == coord_in.y)){
        return true;
    }

    return false;
}

bool Coord::operator!=(const Coord &coord_in) const
{
    if((x != coord_in.x) || (y != coord_in.y)){
        return true;
    }

    return false;
}

Coord & Coord::operator=(const Coord &coord_in)
{
    this->x = coord_in.x;
    this->y = coord_in. y;

    return *this;
}

Coord Coord::operator+(const Coord &coord_in)
{
    Coord tmp;
    tmp.x = this->x + coord_in.x;
    tmp.y = this->y + coord_in.y;

    return tmp;
}

void Coord::set_pos(const Coord &coord_in)
{
    this->x = coord_in.x;
    this->y = coord_in.y;
}

void Coord::set_pos(const char &x, const char &y)
{
    this->x = x;
    this->y = y;
}

Coord & Coord::get_pos()
{
    return *this;
}
