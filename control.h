#ifndef CONTROL_H
#define CONTROL_H

#include <Arduino.h>
#include "coord.h"

class Control: public Coord
{
  //private:
    //int z_state;
  public:
    //Control();
    Coord &get_dir();

    //int z;
    //int pause;
};

#endif // CONTROL_H
