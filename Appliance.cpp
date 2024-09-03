#include <iostream>
#include <string>
#include "Appliance.h"

using namespace std;

    // default Constructor Definition that sets the 'powerRating = 0' and 'isOn = false'
Appliance :: Appliance () {
    powerRating = 0;
    isOn = false;
}

Appliance :: Appliance (int powerR) {
    powerRating = powerR;
    isOn = false;
}

void Appliance :: set_isOn (bool status) {
    isOn = status;
}

void Appliance :: set_powerRating (int powerR){
    powerRating = powerR;
}

int Appliance ::  get_powerRating(){
    return powerRating;    
}
bool Appliance :: get_isOn(){
    return isOn;
}

void Appliance :: turnOn(){
    isOn = true;
}

void Appliance :: turnOff(){
      isOn = false;
}

double Appliance :: getPowerConsumption (){
    return 0.0;
}



