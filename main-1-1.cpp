#include <iostream>
#include "AirVehicle.h"

using namespace std;


int main () {

    AirVehicle av1;

    cout  << av1.get_weight () << av1.get_fuel() << av1.get_numberOfFlights () << endl;



    return 0;
}