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

void hexDigits(int *numbers, int length) {

    char * numbersHex = new char [length];

   for (int i =0; i < length; i++){
    switch (numbers[i]) {

      case 1:  

         numbersHex[i] = '1';
         cout << numbersHex[i] << endl;
         break;
      
      case 2:  

         numbersHex[i] = '2';
         cout << numbersHex[i] << endl;
         break;

      case 3:  

         numbersHex[i] = '3';
         cout << numbersHex[i] << endl;
         break;

      case 4:  

         numbersHex[i] = '4';
         cout << numbersHex[i] << endl;
         break;

      case 5:  

         numbersHex[i] = '5';
         cout << numbersHex[i] << endl;
         break;

      case 6:  

         numbersHex[i] = '6';
         cout << numbersHex[i] << endl;
         break;

      case 7:  

         numbersHex[i] = '7';
         cout << numbersHex[i] << endl;
         break;

      case 8:  

         numbersHex[i] = '8';
         cout << numbersHex[i] << endl;
         break;


      case 9:  

         numbersHex[i] = '9';
         cout << numbersHex[i] << endl;
         break;

      case 10:  

         numbersHex[i] = 'A';
         cout << numbersHex[i] << endl;
         break;

         
      case 11:  

         numbersHex[i] = 'B';
         cout << numbersHex[i] << endl;
         break;

      case 12:  

         numbersHex[i] = 'C';
         cout << numbersHex[i] << endl;
         break;

      case 13:  

         numbersHex[i] = 'D';
         cout << numbersHex[i] << endl;
         break;

      case 14:  

         numbersHex[i] = 'E';
         cout << numbersHex[i] << endl;
         break;

      case 15:  

         numbersHex[i] = 'F';
         cout << numbersHex[i] << endl;
         break;

      default:
         cout << "the end" << endl;
         break;

      }
      
   }
   delete[] numbersHex;

}