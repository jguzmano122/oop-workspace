#include <iostream>
#include <string>
#include "Person.h"
#include "function-1-2.cpp"

extern PersonList deepCopyPersonList(PersonList pl);
extern PersonList createPersonList(int n) ;

using namespace std;

int main() {

int n = 6;
PersonList pl = createPersonList(n);


PersonList newPL = deepCopyPersonList (pl);

delete[] newPL.people; // Deallocate the array
//
return 0;
    
}