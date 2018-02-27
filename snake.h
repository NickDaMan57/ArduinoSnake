#ifndef SNAKE_H
#define SNAKE_H

#include "unit.h"
#include <SoftwareSerial.h>

class Snake: public Unit
{
    public:
        Snake();
        void move(const Coord &dir);
        void grow(const Coord &dir);
        bool is_snake(const Coord &coord_in, char pos);
        Unit *head;
        void reset();
};

#endif // SNAKE_H
