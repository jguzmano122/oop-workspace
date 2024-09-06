#include <iostream>
#include <string>
#include "AirVehicle.h"
#ifndef HELICOPTER_H
#define HELICOPTER_H

using namespace std;

class Helicopter : public AirVehicle {

    private:
        string name;

    public:

    Helicopter ();

    Helicopter (int w, string n);

};


#endif