#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

PersonList createPersonList(int n){

    
    PersonList newlist;         // creating a new Object PersonList
    newlist.numPeople = n;      // assigning newlist's parameter passed onto this function
    newlist.people = new Person[n]; // assigning newlist's parameter passed onto this function
   
        // for loop to assign the newlist's elements
     for (int i = 0; i < newlist.numPeople; ++i) {
        
        newlist.people[i] = Person("Jane Doe", 1); // This line uses the copy constructor
    }
    return newlist;
}




