#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

struct Person {
    string name;
    int age;

        // Default constructor
    Person() : name(""), age(0) {}
        // another Constructor
    Person (string p_name, int p_age){
    
        name = p_name;
        age = p_age;

        cout << p_name << " " << p_age << endl;

    } 
   
};

struct PersonList {
    Person* people;
    int numPeople;
};

#endif
