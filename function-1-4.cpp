// Function to print out the scaled version of the matrix, where you multiply every element in the matrix by the same numeric value
#include <iostream> 
using namespace std;

void print_scaled(int array[3][3],int scale){

int scaledArray [3][3] = {};

for (int i = 0; i < 3; i ++){

    for (int j = 0; j < 3; j++ ) {

        scaledArray[i][j] = (array [i][j]) * scale;
        cout << scaledArray[i][j] << " ";

    } cout << endl;



}



}