#include <iostream>
#include <string>
#include "Person.h"

extern Person* createPersonArray(int n) ;

using namespace std;

int main(){

    //Person person1 ("Pedro", 20);

        int n = 5;
        Person * personArr = createPersonArray (n);

     delete[] personArr; // Deallocate the array

    return 0;
}