// ** corrigiendo el Practical 3

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

    // 1) declaracion de la Struct PersonList
PersonList createPersonList(int n){

    // 2) Crear una Struct PersonList pq esta funcion debe return a PersonList struct
    PersonList newlist;         

    // 3) definimos uno de los data members de esta Struct
    newlist.numPeople = n;      // assigning parameter of PersonList passed onto this function
    
    // 3.1) definimos 
    newlist.people = new Person[n]; // assigning newlist's parameter passed onto this function
   
        // for loop to assign the newlist's elements
     for (int i = 0; i < newlist.numPeople; ++i) {
        
        //newlist.people[i] = Person("Jane Doe", 1); // This line uses the copy constructor

        newlist.people[i].name = "J0e Doe"; // 
        newlist.people[i].age = 1; // 

        cout << newlist.people[i].age << " tenia el " <<newlist.people[i].name << endl;


    }
    return newlist;
}




