#include <iostream>
#include <string> 
#include <ctime>
#include "Vehicle.h"
#include "Motorbike.h"

using namespace std;

int Motorbike :: getParkingDuration (){

    time_t entryTime = getET();
    int parkingTime = (time(nullptr)) - entryTime;

    int reducedTime = parkingTime * 0.85;


    // cout << "entry time: " << entryTime << endl;
    // cout << "parking time: " << parkingTime << " seconds" << endl;
    //cout << "Motorbike reduced time (15%): " << reducedTime << " seconds" << endl;
    cout << "Motorbike parking duration: " << reducedTime <<  " seconds" << endl;
    return reducedTime;    
}    