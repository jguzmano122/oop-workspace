#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

PersonList createPersonList(int n){

    
    PersonList list;
    list.numPeople = n;
    list.people = new Person[n];
    for (int i = 0; i < n; ++i) {
        list.people[i] = Person("Jane Doe", 1);
    }
    return list;
}




