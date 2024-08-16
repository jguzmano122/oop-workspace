#include <iostream>
#include <string>
#include "Person.h"

using namespace std;


    Person* createPersonArray(int n) {

        Person * pArr = new Person [n];

         for (int i = 0; i < n; i++)
        {

        pArr [i] = Person ("John Doe", 0);    


    }
     return pArr;



}