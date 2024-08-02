// Function to transform a positive interger decimal number presented as string of 1 - 9 digits
#include <iostream> 
using namespace std;

// Function signature
void print_binary_str(std::string decimal_number){

int numberDec = stoi(decimal_number);   //converting string to dec
int modulo = 0;
string numStringRev;    // variable to save first part of the result - binary reversed
string finalBinString;  // variable to save final answer - correct bien

if (numberDec == 0){

    finalBinString = "0";

} else if (numberDec <= 999999999 ) {


    while (numberDec > 0 ) {
        // take the number and find its modulo = digit for the binary number
        modulo = numberDec %2; 
        
        numStringRev = numStringRev + to_string(modulo); // adding digit at the end of string using function from 'string' library to convert int into string
        // divide number substracting modulo until reaching zero 
        numberDec = (numberDec - modulo )/2; 
    }

    // reversing result to present fianl bin number
    int numRevLenght = numStringRev.length(); // using function length from string library

    for (int i = numRevLenght - 1; i >= 0; --i) {
            finalBinString += numStringRev[i];
        }
   
} 

 cout << finalBinString << endl; // printing final binary number represented in a string


}
