#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

        // 1) function signature: returning an array of Struct type Person created somewhre else 
        //  of size 'n'
    Person* createPersonArray(int n) { // 

        // 2) Dynamically creating an array of Persons with size 'n'
        Person * pArr = new Person [n]; 

        // 3) for loop accessing the Person's array elements 
         for (int i = 0; i < n; i++)
        {

            // 4) method 1: accessing / assigning pArr[i]'s Struct elements data members
        pArr[i].name = "Jerson";
        pArr[i].age = 111;

            // 5) prining out Struct's elements to check but later commented
                cout << pArr[i].name << " " <<pArr[i].age<< endl;

            // 6) method 2: this is a way to access/assign data members of Structs elements but it is needed TWO Constructors in Person.h
        // pArr [i] = Person ("John Doe", 0);    
    }
     return pArr;



}