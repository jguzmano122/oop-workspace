#include <iostream>

using namespace std;

    //  Part 2 
void changeValue(double* dNumPtr){

*dNumPtr = 42;

}

    // Part 3
void printArray(double* array, int size){

    for (int i = 0; i < size; i++){

        cout << array[i] << " ";

    }
    cout << endl;

}

    // Part 4
double arrayMax(double* array1, int size){

double max = array1[0];

for (int i = 1; i < size; i++){

    if (array1[i] > max){

        max = array1[i];
    }

    } cout << max << endl;
    
return max;

}

    // Part 5
double* dynamicArray(int N){  //function declaration 

    double* arrayDym = new double [N]; // creates an array with N elements: 'Dynamic array'
    
    for (int i = 0; i < N; i++){

        arrayDym[i] = i + 0.2;
        cout << "arrayDym[" << i << "] = " << arrayDym[i]  << endl;
    }
    
    return arrayDym;


 // Getting this error in Gradescope: All files found, +1 marks.
// Successfully compiled program.out with files main.cpp. +1 marks
// program.out failed to compile using files source/test-1-1.cpp
// Compiler stdout:

// -------
// Compiler stderr:
// source/test-1-1.cpp: In function ‘int main()’:
// source/test-1-1.cpp:25:55: error: too many arguments to function ‘double* dynamicArray(int)’
//      double* dynArr = dynamicArray(arraySize, initValue);
//                                                        ^
// In file included from source/test-1-1.cpp:2:0:
// source/workshop.h:43:9: note: declared here
//  double* dynamicArray(int N){  //function declaration
//          ^~~~~~~~~~~~






}


