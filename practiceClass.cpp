#include <iostream>
#include <string>
#include "Estudiante.h"

using namespace std;


int main () {

    // one method to initialise a new Object
    Estudiante s1 ("Navajas", 122, 50.02);

    cout << s1.get_name() << endl << s1.get_ID() << endl << " " << s1.get_grade() << endl;
    

    // these lines were used to initialise the Object when a Constructor was not defined
    s1.set_name ("Pedrito");
    s1.set_grade (5.01);

     cout << s1.get_name() << endl << s1.get_ID() << endl << " " << s1.get_grade() << endl;

    Estudiante s2;

    cout << s2.get_name() << endl << s2.get_ID() << endl << " " << s2.get_grade() << endl;

    Estudiante s3 ("Juanito", 777);

    cout << s3.get_name() << endl << s3.get_ID() << endl << " " << s2.get_grade() << endl;

    //** now using Pointers of type Estudent to access the Objects parameters

    Estudiante * pointerS;
    pointerS = & s1;

    cout << pointerS << endl; // this should print the address of s1
    cout << &pointerS << endl; // this should print s1's...  fist element address???
    cout << pointerS -> get_name()  << endl; // this should s1 Object's parameters

        // cout << *pointerS << endl; *** big error
        // cout << &pointerS -> get_name()  << endl; // this should s1 Object's parameters
    return 0;
}





