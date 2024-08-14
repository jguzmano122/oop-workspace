
#include<iostream>

using namespace std;

extern void hexDigits(int *numbers, int length);
extern int *readNumbers();
void printNumbers(int * numbersHex, int length);

int main(){

int length = 10;
int* ptrArray;

ptrArray = readNumbers();
hexDigits (ptrArray, length);


return 0;


}

