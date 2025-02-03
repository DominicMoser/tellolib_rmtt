#include "Tello.hpp"

Led::Led():r(0),g(0),b(0){
    tt_rgb.Init();
}

void Led::on(){
    tt_rgb.SetRGB(255,255,255);

}

void Led::off()
{
    tt_rgb.SetRGB(0,0,0);

}

Tello::Tello()
{
  this->myLed = Led();
}

Led& Tello::led()
{
    return myLed;
}
