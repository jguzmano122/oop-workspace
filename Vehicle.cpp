#include <iostream>
#include <string> 
#include <ctime>
#include "Vehicle.h"

using namespace std;

    // 1) Constuctotrs definition
Vehicle :: Vehicle () { // 'Vehicle' is the class 
        
        int v_ID = 0; 
        ID = v_ID;

        cout << "please enter Vehicle's ID: " << endl;
        cin >> v_ID;

        timeOfEntry = (time(nullptr));
        char timeString[26];
        ctime_r(&timeOfEntry, timeString);
        //cout << "Vehicle entry time: " << timeString << endl;

    }
    // 2)
Vehicle :: Vehicle (int v_ID) : ID (v_ID) {
    timeOfEntry = (time(nullptr));
}

    // 3)
int Vehicle :: getID() {

    return ID;
}

time_t Vehicle :: getET() {

    return timeOfEntry;

}

int Vehicle :: getParkingDuration (){

    int entryTime = getET();
    time_t parkingTime = (time(nullptr)) - entryTime;
    // cout << "entry time: " << entryTime << endl;
    // cout << "parking time: " << parkingTime << " seconds" << endl;
    //cout << parkingTime << endl;
    return parkingTime;    
}


