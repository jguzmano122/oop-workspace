#include <iostream>
#include <string> 
#include <ctime>
#include "Vehicle.h"
#ifndef MOTORBIKE_h
#define MOTORBIKE_h

using namespace std;

class Motorbike : public Vehicle {
public: 
    
    Motorbike () : Vehicle (){}; 

    Motorbike (int c_ID) : Vehicle (c_ID) {};
    
    int getParkingDuration (); 
    
    };

#endif