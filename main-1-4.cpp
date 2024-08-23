#include <iostream>
#include <string>
#include "Person.h"
#include "function-1-2.cpp"


extern PersonList shallowCopyPersonList(PersonList pl);
extern PersonList createPersonList(int n) ;

using namespace std;

int main() {

int n = 6;
PersonList pl = createPersonList(n);

PersonList newPL = shallowCopyPersonList (pl);

//
return 0;
    
}

