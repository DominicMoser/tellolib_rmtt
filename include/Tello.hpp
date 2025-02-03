#include "RMTT_Libs.h"
#include "RMTT_Protocol.h"
#include "RMTT_TOF.h"
class Led{
private:
  int r, g, b;
  RMTT_RGB tt_rgb;
public:
  Led();
  void on();
  void off();
};

class Tof{
private:
  RMTT_TOF tof_hardware;
public:
  Tof();
  int getDistance();
};

class Tello{
private:
  RMTT_Protocol sdk;
public:
  Tello();
  void takeoff();
  void land();
};

class Controller{
private:
    Led myLED = Led();
    Tof myTOF = Tof();
    //Tello myTello;
public:
    Controller();
    Led& led();
    Tof& tof();
    //Tello& tello();
};
