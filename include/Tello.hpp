#include "RMTT_Libs.h"

class Led{
private:
  int r, g, b;
  RMTT_RGB tt_rgb;
public:
  Led();
  void on();
  void off();
};

class Tello{
private:
    Led myLed;
public:
    Tello();
    Led& led();
};