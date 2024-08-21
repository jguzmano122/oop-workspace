#include "Musician.h"

    // Default constructor: Initialize instrument to "null" and experience to 0
Musician::Musician() : instrument("null"), experience(0) {
    
}

    // Constructor taking instrument and experience
Musician::Musician(std::string instrument, int experience) : instrument(instrument), experience(experience) {
    
}

std::string Musician::get_instrument() {
    return instrument;
}

int Musician::get_experience() {
    return experience;
}




/*

#include "Musician.h"

Musician::Musician() ...

Musician::Musician(std::string instrument, int experience) ...

std::string Musician::get_instrument()...

int Musician::get_experience() ...
*/