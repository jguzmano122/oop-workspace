#include <iostream>
#include <string> 
#include <ctime>
#ifndef VEHICLE_H
#define VEHICLE_H

using namespace std;


    // 1) declaring Class and its 'private' data members
class Vehicle {

    protected:
        int ID; 
        time_t timeOfEntry;
        
       
    public:
    // 2) Constructors
        // 2.1) default Constructor creates an Object and assigns the 'time of entry'
    Vehicle (); 
        // 2.2) second Constructor to assign number plate and automatically assign time of entry
    Vehicle (int v_ID);
    
    // 3) Functions
        // 3.1) function to the number plate of the vehicle
    int getID();
        // 3.2) function to get the Entry Time
    time_t getET ();
        // 3.3) function to get the Parkoing Duration of the vehicle
    virtual int getParkingDuration ();

   };


#endif