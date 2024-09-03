#include <iostream>
#include <string>
#ifndef APPLIANCE_H
#define APPLIANCE_H

using namespace std;

    // 1) declaring class
class Appliance {

    // 2) declaring data members 'protected' so they're only accessible by subclasses
    protected:

        int powerRating;
        bool isOn;
    
    // 3) 'public'
    public:
        // 3.1) default Constructor to set power rating to '0' and 'isOn' to false
        Appliance (); 

        // 3.2 constructor to create an Appliance with 'power rating'        
        Appliance (int powerRating);

    // 4) methods / functions
        

        void set_powerRating(int powerR);
        void set_isOn(bool status);

        int get_powerRating();
        bool get_isOn();

        void turnOn();
        void turnOff();
        virtual double getPowerConsumption (); 
        







};



#endif 