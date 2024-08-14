#include<iostream>
using namespace std;

    // Function 1
int *readNumbers() {

    int * userNums = new int [10]; // dynamic array with size 10

   
         //cout << "enter 10 numbers: ";
         
        for (int i = 0; i < 10; i++){

       
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

    int * numbersArr = new int [length];

   for (int i =0; i < length; i++){
    switch (numbers[i]) {

      case 1:  

         numbersArr[i] = 1;
         cout << i << " " << numbersArr[i] << " " << "1" << endl;
         break;
      
      case 2:  

         numbersArr[i] = 2;
          cout << i << " " << numbersArr[i] << " " << "2" << endl;
         break;

      case 3:  

         numbersArr[i] = 3;
         cout << i << " " << numbersArr[i] << " " << "3" << endl;
         break;

      case 4:  

         numbersArr[i] = 4;
         cout << i << " " << numbersArr[i] << " " << "4" << endl;
         break;

      case 5:  

         numbersArr[i] = 5;
         cout << i << " " << numbersArr[i] << " " << "5" << endl;
         break;

      case 6:  

         numbersArr[i] = 6;
         cout << i << " " << numbersArr[i] << " " << "6" << endl;
         break;

      case 7:  

         numbersArr[i] = 7;
         cout << i << " " << numbersArr[i] << " " << "7" << endl;
         break;

      case 8:  

         numbersArr[i] = 8;
         cout << i << " " << numbersArr[i] << " " << "8" << endl;
         break;


      case 9:  

         numbersArr[i] = 9;
         cout << i << " " << numbersArr[i] << " " << "9" << endl;
         break;

      case 10:  

         numbersArr[i] = 10;
         cout << i << " " << numbersArr[i] << " " << "A" << endl;

         
      case 11:  

         numbersArr[i] = 11;
         cout << i << " " << numbersArr[i] << " " << "B" << endl;
         break;

      case 12:  

         numbersArr[i] = 12;
         cout << i << " " << numbersArr[i] << " " << "C" << endl;
         break;

      case 13:  

         numbersArr[i] = 13;
         cout << i << " " << numbersArr[i] << " " << "D" << endl;
         break;

      case 14:  

         numbersArr[i] = 14;
         cout << i << " " << numbersArr[i] << " " << "E" << endl;
         break;

      case 15:  

         numbersArr[i] = 15;
         cout << i << " " << numbersArr[i] << " " << "F" << endl;
         break;

      default:
         cout << "the end" << endl;
         break;

      }
      
   }
   delete[] numbersArr;

}


