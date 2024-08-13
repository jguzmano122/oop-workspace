#include<iostream>
using namespace std;

    // Function 1
int *readNumbers() {

    int * userNums = new int [10]; // dynamic array with size 10

        for (int i = 0; i < 10; i++){

        cout << "enter a number: ";
        cin >> userNums[i];

        }

        return userNums;


}

    // Function 2
void printNumbers(int *numbers, int length) {

if (length < 0){
    cout << "array must have at least one element" << endl;
} else {
    for (int j = 0; j < length; j ++){

    cout << j << " "<<  numbers[j] << endl;
    }

}

}