#include <iostream>
#include <string>
#include "Person.h"

extern PersonList createPersonList(int n) ;

using namespace std;


int main(){

    PersonList pList = createPersonList(6);

    return 0;
}