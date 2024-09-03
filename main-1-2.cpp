#include <iostream>
#include <string> 
#include <ctime>
#include "Vehicle.h"
#include "ParkingLot.h"

using namespace std;

int main (){

    // creating new object ParkingLot with max capacity 5
    ParkingLot pl (5);
    // testing function
    cout << "parking spaces taken: " << pl.getCount() << endl;

    // gettin new Vehicle's ID to add vehicle to 'vehicles' array
    int ID;

    cout << "Enter vehicle ID: " << endl;
    cin >> ID; 

    // ** new porinter to object Vehicle with ID given (from the Class Vehicle that's why it's a pointer)
    Vehicle * newVehicle = new Vehicle (ID);

    // test 
    int nvID = newVehicle->getID();
    
    cout << nvID << endl;

    pl.parkVehicle(newVehicle);

     cout << "parking spaces taken: " << pl.getCount() << endl;

    return 0;
}




















