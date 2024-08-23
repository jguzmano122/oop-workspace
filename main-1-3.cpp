//** "Deep Copy" - Corrigiendo Practical 3: dos ejemplos aca - el primero que se remitio y el segundo estudiando
// En el primero se crea una nueva PersonList a partir de la funcion hecha en 1-2 'createPersonList' y se 
// copia usando 'deepCopyPersonList' de 1-3
// En el segundo se crea desde cero una nueva PersonList y se 'Deep Copy' usando 'deepCopyPersonList'

#include <iostream>
#include <string>
#include "Person.h"

// 1) incluyendo esta funcion para poder usar 'deepCopyPersonList'
#include "function-1-2.cpp"

// 2) declarando las funciones que se van a hacer
extern PersonList deepCopyPersonList(PersonList pl);
extern PersonList createPersonList(int n) ;

using namespace std;

int main() {

// ** metodo 1 remitido en Practical 3
    // 3) declarando el tamano que se necesita pasar como argumento para 'createPersonList'
    int n = 6;

    // 4) creando una nueva PersonList que va a pasar como argumento en 'deepCopyPersonList'
    PersonList pl = createPersonList(n);

    // 5) calling 'deepCopyPersonList' para crear nueva PersonList que va a pasar como argumento
    PersonList newPL = deepCopyPersonList (pl);

    // 6) liberando memora pq 'newPL.people' es una array Dynamically created in function 1-2
    delete[] newPL.people; // Deallocate the array

// ** metodo 2 estudiando

    // a) declarando nueva Original PersonList que va a pasar como argumento en 'deepCopyPersonList'
    PersonList OriginalPL;

    // b) declarando el tamano de la PersonList original
    OriginalPL.numPeople = 2;

    // c) declaring new PersonList 'people' data member: which is an array of type Person and size of the original PersonList
    OriginalPL.people = new Person[OriginalPL.numPeople];

    // d) assigning values to the elements of the array of Persons belonging to the array 'people' of OriginalPL
    for (int i = 0; i < OriginalPL.numPeople; ++i) {
        OriginalPL.people[i].name = "Pepe";
        OriginalPL.people[i].age = 20 + i;

        // cout <<OriginalPL.people[i].name << " " << OriginalPL.people[i].age << endl;
    }

    // e) creando una nueva PersonList 'newPL' para copiarle los data members the 'OriginalPL'
    PersonList newPL2 = deepCopyPersonList (OriginalPL);

        for (int i = 0; i < newPL2.numPeople; ++i) {

        cout <<newPL2.people[i].name << " " << newPL2.people[i].age << endl;

        }

      // f) liberando memora pq 'OriginalPL.people' es una array Dynamically created in function 1-3
    delete [] OriginalPL.people;

//
return 0;
    
}