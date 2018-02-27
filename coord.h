#ifndef COORD_H
#define COORD_H

class Coord
{
    public:
        int x;
        int y;

        Coord();
        Coord(const  char &x, const char &y);
        bool operator==(const Coord &coord_in)const;
        bool operator!=(const Coord &coord_in)const;
        Coord & operator=(const Coord &coord_in);
        Coord operator+(const Coord &coord_in);
        void set_pos(const char &x, const char &y);
        void set_pos(const Coord &coord_in);
        Coord & get_pos();
};

#endif // COORD_H
