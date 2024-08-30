#include <iostream>
#include <string> 
#include <ctime>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

// Functions
int Car :: getParkingDuration () {

    time_t entryTime = getET();
    time_t parkingTime = (time(nullptr)) - entryTime;

    
    int reducedTime = parkingTime * 0.9;


    // cout << "entry time: " << entryTime << endl;
    // cout << "parking time: " << parkingTime << " seconds" << endl;
    cout << "Car reduced time (10%): " << reducedTime << " seconds" << endl;
    
    return parkingTime;    
}    

