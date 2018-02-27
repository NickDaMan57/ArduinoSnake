#include "unit.h"

Unit::Unit()
{
    set_pos(0,0);
    prev = 0;
}

Unit::Unit(const char &x, const char &y)
{
    set_pos(x, y);
    prev = 0;
}

bool Unit::is_unit(const Coord &coord_in)
{
    if(coord_in == *(Coord*)this)
    {
        return true;
    }

    return false;
}
