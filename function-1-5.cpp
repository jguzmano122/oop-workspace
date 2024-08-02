// Function to multiply two two-dimensional arrays and print the result as in 1-4 
#include <iostream> 
using namespace std;

void print_summed(int array1[3][3],int array2[3][3]){

int array3 [3][3] ={0, 0, 0};

for (int i =0; i < 3; i++) {

    for (int j = 0; j < 3; j ++){
    
        array3 [i][j] = array1 [i][j] * array2 [i][j] ;
        cout << array3[i][j] << " ";
    } cout << endl;

    } 



}