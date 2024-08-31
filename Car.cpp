#include <iostream>
#include <string> 
#include <ctime>
#include "Vehicle.h"
#include "Car.h"
#include <chrono>

using namespace std;

// Functions
int Car :: getParkingDuration () {

    time_t entryTime = getET();
    int parkingTime = (time(nullptr)) - entryTime;
 
    int reducedTime = parkingTime * 0.9;


    // cout << "entry time: " << entryTime << endl;
    // cout << "parking time: " << parkingTime << " seconds" << endl;
    //cout << "Car reduced time (10%): " << reducedTime << " seconds" << endl;
    //cout << "Car parking duration: " << reducedTime <<  " seconds" << endl;
    return reducedTime;    
}    

