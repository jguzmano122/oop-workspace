// Function to return the sum of the elements along the main diagonal (top left bottom right) of a given array

#include <iostream> 
using namespace std;

// function declaration
int sum_diagonal(int array[4][4]){

int diagSum = 0;

    for (int i= 0; i < 4; i++){

        diagSum = diagSum + array[i][i];
        
    }

return diagSum;

}