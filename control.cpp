#include "control.h"

#define X A1
#define Y A0
#define Z 8

/*Control::Control()
{
  pinMode(Z, INPUT_PULLUP);
  z = digitalRead(Z);
  pause = 0;
  z_state = 0;
}*/

Coord &Control::get_dir()
{
  int x = analogRead(X);
  int y = analogRead(Y);
  /*int ztmp = digitalRead(Z);

  if(z != ztmp) {
    pause = 1;
    Serial.print(ztmp);
  }*/

  if (x>=384 && x<=640 && y>=384 && y<=640){
    set_pos(0,0);
  }
  else if(x<384) {
    set_pos(-1,0);
  }
  else if(x>640) {
    set_pos(1,0);
  }
  else if(y<384) {
    set_pos(0,-1);
  }
  else if(y>640) {
    set_pos(0,1);
  }
  
  return *this;
}
