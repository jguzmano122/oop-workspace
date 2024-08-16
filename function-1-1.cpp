#include<iostream>
using namespace std;

    // Function 1
int *readNumbers() { // returs pointer to the array 'numbers'

    int * userNums = new int [10]; // dynamic array with size 10

         //cout << "enter 10 numbers: ";
         
        for (int i = 0; i < 10; i++){

       
        cin >> userNums[i];

        }

        return userNums;


}

