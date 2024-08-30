#include <iostream>
#include <string> 
#include <ctime>
#include "Vehicle.h"
#ifndef CAR_H
#define CAR_H

using namespace std;

class Car : public Vehicle {
public: 
    // Constructors    
Car () : Vehicle (){} 
Car (int c_ID) : Vehicle (c_ID) {}
    
    // Functions
int getParkingDuration (); 


    };

#endif