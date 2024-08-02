// Function and to determine if the matrix is an identity matrix or not. Return a 1 if it is an identity matrix and a 0 if not.
// (Definition: An identity matrix is one with 1's down the main diagonal and 0's elsewhere)
#include <iostream> 
using namespace std;

int is_identity(int array[10][10]){

int diagOnes = 0;

for (int i = 0; i < 10; i++){

    for (int j = 0; j < 10; j ++){

    cout << array[i][j] << " ";
    if (i == j){
        diagOnes = 0;
    } else diagOnes = 1;
    
    } cout <<endl;

} return diagOnes;

}






