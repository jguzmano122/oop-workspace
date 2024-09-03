#include <iostream>
#include <string>
#include "Appliance.h"
#include "Fridge.h"


int main (){

        // 1) creating a new object from the Class Fridge with 'default Constructor'
    Fridge f1;
        // 2) calling inherited methods from Base Class Appliance 
    cout << "Power rating f1: " << f1.get_powerRating() << " status: " <<  f1.get_isOn()<< endl;
        
        // 3) calling exclusive methods from SubClass
    cout << " volume: " << f1.getVolume() << endl;

        // 4) using INHERITED Constructor setting 'powerRating'
    f1.set_powerRating(777); 

        // 5) setting status using inherited method 
    f1.set_isOn (true);
        // 6) setting volume using exclusive method
    f1.setVolume (9.9999);

        // 7) using getters and displaying setup values
    cout << "Power rating f1: " << f1.get_powerRating() << " status: " <<  f1.get_isOn()<< " volume: " << f1.getVolume() << endl;

        // 8) using exclusive Constructor to create an object and setup powerRating and volume
    Fridge f2 (555, 15.88);

        // 9) 
    cout << "Power rating f2: " << f2.get_powerRating() << " status: " <<  f2.get_isOn()<< " volume: " << f2.getVolume() << endl;

    f2.set_powerRating(3333); 
    f2.set_isOn (true);
    f2.setVolume (57.985);

    cout << "Power rating f2: " << f2.get_powerRating() << " status: " <<  f2.get_isOn()<< " volume: " << f2.getVolume() << " Power Consumption: " << f2.getPowerConsumption () << endl;

    

    return 0;
}