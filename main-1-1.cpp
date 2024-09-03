#include <iostream>
#include <string>
#include "Appliance.h"

using namespace std;


int main (){

Appliance ap1;

cout << "Power rating ap1 " << ap1.get_powerRating() << " status: " <<  ap1.get_isOn()<< endl;

Appliance ap2 (333);

cout << "Power rating ap2 : " << ap2.get_powerRating() << " status: " <<  ap2.get_isOn()<< endl;


cout << " status ap1: " <<  ap1.get_isOn () << endl;
ap1.set_isOn (true);
cout << " status ap1: " <<  ap1.get_isOn () << endl;

ap1.turnOff();
cout << " status ap1: " <<  ap1.get_isOn () << endl;

ap2.set_powerRating(1000);
cout << "Power rating ap2: " << ap2.get_powerRating() << endl;

    return 0;
}