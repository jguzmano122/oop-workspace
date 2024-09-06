#include <iostream>
#include <string>
#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

class AirVehicle {

    protected:

        int weight; // the weight of the AirVehicle
        float fuel;     // fuel percentage, initially 100%
        int numberOfFlights;    // initially 0

    public:

AirVehicle ();      // when called, fuel reset to 100
AirVehicle (int w);  // creates an AirVehicle with weight w

void refuel(); 
virtual void fly (int headwind, int minutes); // everytime this method is called numberOfFlights should be increased by 1

    // setters
void set_weight (int w_AV) {
    weight = w_AV;
}

void set_fuel (float f_AV) {
    fuel = f_AV;
}

void set_numberOfFlights (int nf_AV) {
    numberOfFlights = nf_AV;
}

// getters

int get_weight () {
    return weight;
}

float get_fuel (){
    return fuel;
}

int get_numberOfFlights () {
    return numberOfFlights;
}


};

#endif