#include <iostream>
#include <string> 
#include <ctime>
#include "Vehicle.h"
#ifndef BUS_H
#define BUS_H

using namespace std;

class Bus : public Vehicle {
public: 
    
    Bus () : Vehicle (){}; 

    Bus (int c_ID) : Vehicle (c_ID) {};
        
    int getParkingDuration (); 
    };

#endif