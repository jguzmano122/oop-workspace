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
    Vehicle (int v_ID);
    
    int getID();
    time_t getET ();
    virtual int getParkingDuration ();

   };






























#endif