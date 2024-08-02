// main file to run function-2-2
#include <iostream> 
using namespace std;

// Function declaration
extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {

int number_of_digits = 30;
int binary_digits [number_of_digits] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};


binary_to_int (binary_digits, number_of_digits );



}