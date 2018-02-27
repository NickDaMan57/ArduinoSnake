#include "snake.h"

Snake::Snake()
{
    Unit *tmp;

    head = this;
    tmp = head;

    tmp->set_pos(2,0);  //Set head to position 2,0

    //Create 2 more units for body
    for(int i=2; i>0; i--){
        tmp->prev = new Unit(i-1, 0);
        tmp = tmp->prev;
    }
}

bool Snake::is_snake(const Coord &coord_in, char pos)
{
    Unit *tmp = head;

    while(pos) {
      tmp = tmp->prev;
      pos--;
    }
    
    while(tmp != 0)
    {
        if(coord_in == *(Coord*)tmp) {
            return true;
        }

        tmp = tmp->prev;
    }

    return false;
}

void Snake::move(const Coord &dir)
{
    Unit *tmp;
    Coord ori_coord;
    Coord new_coord;

    tmp = head;
    new_coord = *(Coord*)tmp + dir;

    while(tmp != 0) {
        ori_coord = *(Coord*)tmp;
        tmp->set_pos(new_coord);
        new_coord = ori_coord;
        tmp = tmp->prev;
    }
}

void Snake::grow(const Coord &dir)
{
    Unit *tmp = new Unit();
    tmp->set_pos(this->get_pos());
    tmp->prev = this->prev;
    this->prev = tmp;
    this->set_pos(this->get_pos() + dir);
}

void Snake::reset()
{
  Unit* tmp;
  Unit* tmp2;

  tmp = head;
  for(int i=2; i>-1; i--) {    //Where 2+head is the size of snake
    tmp->set_pos(i,0);
    tmp = tmp->prev;
  }

  if(tmp != NULL) {
    tmp2 = tmp->prev;
    tmp->prev = NULL;   //Cuts tail at position i+head
  
    while(tmp2!=NULL) {
      tmp = tmp2;
      tmp2 = tmp2->prev;
      free(tmp);
    }
  
    free(tmp2);
  }
}

