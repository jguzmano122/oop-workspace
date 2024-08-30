#include <iostream>
#include <string> 
#include <ctime>
#include "Vehicle.h"
#include "Bus.h"

using namespace std;

int Bus :: getParkingDuration ()
{
    time_t entryTime = getET();
    int parkingTime = (time(nullptr)) - entryTime;

    int reducedTime = parkingTime * 0.75;


    // cout << "entry time: " << entryTime << endl;
    // cout << "parking time: " << parkingTime << " seconds" << endl;
    //cout << "Bus reduced time (25%): " << reducedTime << " seconds" << endl;
    cout << "Bus parking duration: " << reducedTime <<  " seconds" << endl;
    return reducedTime;    
}    