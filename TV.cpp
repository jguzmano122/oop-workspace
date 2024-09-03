#include <iostream>
#include <string>
#include "TV.h"
#include "Appliance.h" // ** no me acorde de esto!!

    // default Constructor
    // ** NO ME ACORDE DE ESTO
 TV :: TV () : Appliance () { // ** MUY IMPORTANTE (Numi explained this to me)
    screenSize = 0;

 } 
 
    // parameterised Constructor ** explicacion de Numi
 
 TV :: TV (int powerR, double screenS) : Appliance (powerR) { // ** NO ME ACORDE DE ESTA DECLARATION

    screenSize = screenS;

 } 

    // methods / functions exclusive of this Class
void TV :: setScreenSize (double screenS){ // ** ME OLVIDE DE USAR :: EN EL ORDEN CORRECTO
    screenSize = screenS;

}

double TV :: getScreenSize (){ // ** ME OLVIDE DE USAR :: EN EL ORDEN CORRECTO

    return screenSize;

}

    // method / function INHERITED from 'Appliance' but with exclusive formula 
    // (por eso se tiene que declarar aca tambien y definir en el archivo .cpp )
double TV :: getPowerConsumption() { // ** ME OLVIDE DE USAR :: EN EL ORDEN CORRECTO

    double powerC;
    powerC = powerRating * (screenSize / 10);

    return powerC;

}
