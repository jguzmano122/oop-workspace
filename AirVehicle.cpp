// #include <streamio>
#include "AirVehicle.h"

using namespace std;

AirVehicle :: AirVehicle () {

    int weight = 0; // the weight of the AirVehicle
    float fuel = 100;     // fuel percentage, initially 100%
    int numberOfFlights = 0;    // initially 0

}

AirVehicle :: AirVehicle (int w_AV) {

    weight = w_AV; // the weight of the AirVehicle
    float fuel = 100;     // fuel percentage, initially 100%
    int numberOfFlights = 0;    // initially 0

}

void AirVehicle :: refuel() {
    fuel = 100;
}

void AirVehicle :: fly (int headwind, int minutes) { // everytime this method is called numberOfFlights should be increased by 1
    numberOfFlights ++;
}