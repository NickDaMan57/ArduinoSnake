#ifndef UNIT_H
#define UNIT_H

#include "coord.h"

class Unit: public Coord
{
    public:
        Unit();
        Unit(const char &x, const char &y);
        Unit *prev;
        bool is_unit(const Coord &coord_in);
};

#endif // UNIT_H
