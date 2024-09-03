#include <iostream>
#include <string>
#include "Appliance.h"
#ifndef TV_H
#define TV_H

class TV : public Appliance {

        // only define exclusive data members
    private:

        double screenSize; // screen size in inches

    public:

        // Constructors

        // // ** NO ME ACORDE DE ESTO
        TV ();  // default Constructor -- ** NO ME ACORDE DE ESTO
        TV (int powerRating, double screenSize); // ** NO ME ACORDE DE ESTO

        // methods / functions exclusive of this Class
        void setScreenSize (double screeSize);
        double getScreenSize ();

        // method / function INHERITED from 'Appliance' but with exclusive formula 
        // (por eso se tiene que declarar aca tambien y definir en el archivo .cpp )
        double getPowerConsumption();

};

#endif