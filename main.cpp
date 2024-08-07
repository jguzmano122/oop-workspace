#include <iostream>
#include "workshop.h"
using namespace std;

int main(){

    // Part 1
double number = 10.5;
char character = 'J';

double *doubP;
char *charP;

doubP = &number;
charP = &character;
    // examples to print variables and pointers
// cout << number << endl;
// cout << character << endl;
// cout << *doubP << endl;
// cout << *charP << endl;

    // Part 2
    cout << "Part 2: " << endl;
changeValue(doubP);
cout << number << endl;

    // Part 3
    cout << "Part 3: " << endl;
double arrayDb [5] = {5.1, 4.2, 3.3, 9.4, 8.5};
int size = 5;

double *arrayPtr;
arrayPtr = &arrayDb[0];

printArray(arrayPtr, size);

    // Part 4
    cout << "Part 4: " << endl;
double max = 0;
max = arrayMax(arrayPtr, size);

    // Part 5
    cout << "Part 5: " << endl;
int N = 6;
double *arrayD; 

arrayD = dynamicArray(N);

delete arrayD;

 // Part 6
 cout << "Part 6: " << endl;
int n = 5;
double *arrayM = dynamicArray(n);

double maxP6 = 0;
maxP6 = arrayMax(arrayM, n);

delete arrayM;


return 0;

}



