// ***JG:  archivos revisados y actualizados por JG para practicar

#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

struct Person {
    string name;
    int age;

        // **  these two Constructors needed for using this method 2 in function-1-1.cpp
        // pArr [i] = Person ("John Doe", 0);    

        // Default constructor
    // Person() : name("None"), age(0) {}
       
        // second Constructor
    // Person (string p_name, int p_age){
    
    //     name = p_name;
    //     age = p_age;
        // printing out to check
    //cout << p_name << " " << p_age << endl;

   // } 
   
};

struct PersonList {
    Person* people;  // this is a pointer to an array of Struct type Person: 
    int numPeople;  // number of Person elements of the array

};

#endif
