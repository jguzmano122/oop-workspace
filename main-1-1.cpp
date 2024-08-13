#include<iostream>

using namespace std;

extern int *readNumbers();

extern void printNumbers(int *numbers,int length);

int length = 10;

int main(){

int* ptrArray;

ptrArray = readNumbers();
   
    

printNumbers(ptrArray, length);

delete[] ptrArray; 

return 0;

}