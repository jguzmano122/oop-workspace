#include <iostream>
#include <string>
#include "Person.h"
#include "function-1-2.cpp"

PersonList shallowCopyPersonList(PersonList pl){

PersonList newPL;  // new PersonList Object

    newPL.numPeople = pl.numPeople;     // assigning to newPL's parameter numPeople from the argument passed on
    //newPL.people = pl.people;    // assigning to newPL's parameter 'people' from the argument passed onto create a new array of Persons 

for (int i = 0; i < pl.numPeople; ++i) {
        newPL.people[i] = pl.people[i]; // Copy constructor used here
        
    }

    return newPL;




}