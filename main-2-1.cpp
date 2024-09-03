#include <iostream>
#include <string>
#include "Appliance.h"
#include "Fridge.h"


int main (){

    Fridge f1;

    cout << "Power rating f1: " << f1.get_powerRating() << " status: " <<  f1.get_isOn()<< " volume: " << f1.getVolume() << endl;

    f1.set_powerRating(777); 
    f1.set_isOn (true);
    f1.setVolume (9.9999);

    cout << "Power rating f1: " << f1.get_powerRating() << " status: " <<  f1.get_isOn()<< " volume: " << f1.getVolume() << endl;

    Fridge f2 (555, 15.88);

    cout << "Power rating f2: " << f2.get_powerRating() << " status: " <<  f2.get_isOn()<< " volume: " << f2.getVolume() << endl;

    f2.set_powerRating(3333); 
    f2.set_isOn (true);
    f2.setVolume (57.985);

    cout << "Power rating f2: " << f2.get_powerRating() << " status: " <<  f2.get_isOn()<< " volume: " << f2.getVolume() << " Power Consumption: " << f2.getPowerConsumption () << endl;

    return 0;
}