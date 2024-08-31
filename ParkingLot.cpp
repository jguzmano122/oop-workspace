#include <iostream>
#include <string> 
#include "Vehicle.h"
#include "ParkingLot.h"

using namespace std;

    // Default Constructor Definition
ParkingLot :: ParkingLot (int _maxCap) {
        maxCap = _maxCap;
        vehicles = new Vehicle * [_maxCap];

    }

    // functions
    // to get the number of vehicles taken
  int ParkingLot :: getCount () {

    return counterVehicles;
  }
    // to add a vehicle to the parking lot
bool ParkingLot :: parkVehicle (Vehicle* newVehicle){

    if (counterVehicles < maxCap){

        vehicles[counterVehicles] = newVehicle;
        counterVehicles ++;

        return true;
    } else{

    cout << "The lot is full" << endl;
    return false;

    }
}
    // to unpark a vehicle
bool ParkingLot :: unparkVehicle (int ID) {

    for (int i = 0; i < counterVehicles; i++){

        if (vehicles[i] -> getID() == ID) {
           cout << "ID found: " << ID << endl;

        }
    }
    return true;
    


}
