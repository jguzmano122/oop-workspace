#include<iostream>

using namespace std;

extern int *readNumbers();

extern void printNumbers(int *numbers,int length);

int length = 10;

int main(){

int* ptrArray; // creating a pointer to the array 

ptrArray = readNumbers();  // pointer to call the function 'readNumbers' that returns a pointer to an array
                           // pointer 'ptrArray' now point to the array readNumbers'
   
printNumbers(ptrArray, length); // now 'printNumbers' function is getting a pointer as argument to the array

delete[] ptrArray; // clearing after dynamically creating an array

return 0;

}