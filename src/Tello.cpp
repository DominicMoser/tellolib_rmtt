#include "Tello.hpp"
#include <Arduino.h>
#include <Wire.h>
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

Tof::Tof(){
  Wire.begin(27,26);
  tof_hardware.Init();
  tof_hardware.SetTimeout(500);
  tof_hardware.SetMeasurementTimingBudget(20000);
}

int Tof::getDistance(){
    return tof_hardware.ReadRangeSingleMillimeters()/10;
}

Controller::Controller(){
    //Serial.begin(115200);
    //Serial1.begin(1000000, SERIAL_8N1, 23, 18);
};

Led& Controller::led(){
    return myLED;
};

Tof& Controller::tof(){
  return myTOF;
};



Tello& Controller::tello(){
 return myTello;
};

Tello::Tello(){
  sdk.startUntilControl();
};

void Tello::takeoff(){
  sdk.TakeOff();
};

void Tello::land(){
  sdk.Land();
};

