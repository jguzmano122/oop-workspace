#include <iostream>
#include <string>
#include "Person.h"

extern PersonList createPersonList(int n) ;

using namespace std;


int main(){

    int size = 7;
    PersonList pList = createPersonList(size);

    return 0;
}