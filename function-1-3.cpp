#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

// 1) function signature
PersonList deepCopyPersonList(PersonList pl){

    PersonList newPL;  // we need to create a new PersonList struct to pass it on

    // 2) new PersonList's data members need to be copied: "numPeople" & "people"
        // 2.1) // assigning to newPL's parameter numPeople from the argument received 'pl'
    newPL.numPeople = pl.numPeople;     
    
        // 2.2) assigning data member 'people' which is an array of Person's -> we need to give it a size which is the same as the original PersonList 'pl'
    newPL.people = new Person[pl.numPeople];    // assigning to newPL's parameter 'people' from the argument passed onto create a new array of Persons 

    // 3) as this is an array of Person's we need to (copy) assign each element to the new PersonList 
for (int i = 0; i < pl.numPeople; ++i) {
        newPL.people[i] = pl.people[i]; 
    }

    // 4) important to return the new PersonList just created /copied
    return newPL;

    
}