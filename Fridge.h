#include <iostream>
#include <string>
#include "Appliance.h"
#ifndef FRIDGE_H
#define FRIDGE_H


class Fridge : public Appliance {
        // 1) Acceess Modifiers
        // 1.1) Private
    private: 
        double volume; // volume in litres
        // int powerRating;
        // bool isOn;
        
        // 1.2 Public
        // 2) Constructors
    public: 
        Fridge(); //default Constructor ** note DECLARATION
        
        Fridge(int powerRating, double volume); // other Constructor ** note DECLARATION

        // 3) Functions / methodds

        void setVolume (double volume);
        double getVolume ();

        double getPowerConsumption(); // inherited from Appliance but defined here coz' it'll change

    




};





#endif