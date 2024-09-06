#include <iostream>
#include "AirVehicle.h"

using namespace std;


int main () {

    AirVehicle av1;

    cout  << "weight: " << av1.get_weight () << " fuel: " << av1.get_fuel() << " No. flights: " << av1.get_numberOfFlights () << endl;


    av1.set_numberOfFlights (32);
    av1.set_weight (2200);
    av1.fly (10, 10);
    av1.fly (10, 10);

     cout  << "weight: " << av1.get_weight () << " fuel: " << av1.get_fuel() << " No. flights: " << av1.get_numberOfFlights () << endl;

    return 0;
}