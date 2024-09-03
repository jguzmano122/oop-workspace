#include <iostream>
#include <string>
#include "Appliance.h"
#include "Fridge.h"

using namespace std;

    // 1) Definition of default Constructor
Fridge :: Fridge () : Appliance() {

// ** DO NOT DECLARE / DEFINE INHERITED DATA MEMBERS !! **
    // powerRating = 0; // can also use inherited Appliance () default Constructor 
    // isOn = false;
    volume = 0.0;

} 

Fridge :: Fridge(int powerR, double vol) : Appliance(powerR) {
    volume = vol;

}

void Fridge :: setVolume (double vol){

    volume = vol;

}

double Fridge :: getVolume (){

    return volume;
}

double Fridge :: getPowerConsumption() {

    double powerConsumption;
    powerConsumption = powerRating * 24 *(volume/100);

    return powerConsumption;

}

    

