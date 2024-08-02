// main file to run function-1-1

#include <iostream> 
using namespace std;

extern int sum_diagonal(int array[4][4]);
int sumDiag = 0;

int main(){

   int array [4][4] = { {2, 3, 4, 5}, 
                        {12, 13, 14, 15},
                        {20, 21, 22, 23},
                        {7, 8, 9, 10}
        };

    sumDiag = sum_diagonal (array);
    cout << sumDiag << endl;
    
    return 0;
}
