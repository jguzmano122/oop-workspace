// Function to convert an array representing a binary numner into a decimal
#include <iostream> 
#include <cmath> 
using namespace std;

// Function signature
int binary_to_int (int binary_digits[], int number_of_digits){

int sum = 0;
int exponent = 0;


for (int i = number_of_digits -1; i >=0; i--) {

    if (binary_digits[i] == 1) {
    sum += (pow (2, exponent));
    
    
    }
    exponent ++; 

} cout << sum << endl;


return sum;

}

