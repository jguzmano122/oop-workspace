#include <iostream>
#include <string>
#include "Appliance.h"
#include "TV.h"

using namespace std;

int main() {

    TV tv1;

    cout << "** testing values using Default Constructor" << endl;
        // ** SE ME OLVIDARON LOS '()'
    cout << "default tv1 powerRating: " << tv1.get_powerRating() << " default tv1 screenSize: " << tv1.getScreenSize () << " default isOn: " << tv1.get_isOn() << endl;


    TV tv2 (2323, 15);

    cout << "** testing values using Constructor Parameterised" << endl;
    cout << "default tv2 powerRating: " << tv2.get_powerRating() << " default tv2 screenSize: " << tv2.getScreenSize () << " default isOn: " << tv2.get_isOn() << endl;

    cout << "** testing methods" << endl;
    
    cout << "ScreenSize tv2: " << tv2.getScreenSize() << "Power rating tv2: " << tv2.get_powerRating() << " status: " <<  tv2.get_isOn()<< " Power Consumption: " << tv2.getPowerConsumption () << endl;


    return 0;
}


