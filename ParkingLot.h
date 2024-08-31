#include <iostream>
#include <string> 
#include <ctime>
#include "Vehicle.h"
#ifndef PARKINGLOT_H
#define PARKINGLOT_H

using namespace std;
    // 1) declaring class
class ParkingLot {

    protected:
        int maxCap;
        Vehicle** vehicles;
        int counterVehicles = 0;

    public:

        // 2) Constructors
        // 2.1) Constructor taking maxCap = maxima capacidad de vehiculos     
    ParkingLot (int _maxCap); 


        // 3) funcitons
        // 3.1) to get the spaces taken in the lot
    int getCount (); 
        // 3.2) to park a new vehicle if possible
    bool parkVehicle (Vehicle* newVehicle);
        // 3.3) to unpark a vehicle using its ID
    bool unparkVehicle (int ID);



};




#endif