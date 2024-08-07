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


 // Part 6





}


