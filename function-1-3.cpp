#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

PersonList deepCopyPersonList(PersonList pl){

    PersonList newPL;  // new PersonList Object

    newPL.numPeople = pl.numPeople;     // assigning to newPL's parameter numPeople from the argument passed on
    newPL.people = new Person[pl.numPeople];    // assigning to newPL's parameter 'people' from the argument passed onto create a new array of Persons 

for (int i = 0; i < pl.numPeople; ++i) {
        newPL.people[i] = pl.people[i]; // Copy constructor used here
        
    }

    return newPL;

    
}