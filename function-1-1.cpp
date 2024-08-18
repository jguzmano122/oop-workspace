#include <iostream>
#include <string>
#include "Person.h"

using namespace std;


    Person* createPersonArray(int n) {

        Person * pArr = new Person [n]; // here function calls Person's default Construnctor

         for (int i = 0; i < n; i++)
        {

        pArr [i] = Person ("John Doe", 0);    // here function calls Person's second Construnctor


    }
     return pArr;



}