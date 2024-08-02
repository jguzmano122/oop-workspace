// main file to run function-1-2
#include <iostream> 
using namespace std;

extern int is_identity(int array[10][10]);
int identityRes = 0;

int main(){

   int array [10][10] = {
        {5, 3, 8, 1, 6, 2, 4, 7, 9, 5},
        {7, 1, 9, 6, 8, 4, 3, 2, 5, 9},
        {2, 6, 3, 7, 1, 8, 9, 4, 7, 2},
        {9, 4, 5, 3, 2, 7, 8, 6, 1, 3},
        {8, 2, 7, 5, 9, 1, 6, 3, 4, 8},
        {3, 9, 2, 4, 6, 5, 7, 1, 8, 2},
        {1, 8, 4, 9, 7, 3, 2, 5, 6, 4},
        {6, 5, 1, 8, 3, 2, 9, 7, 1, 8},
        {4, 7, 8, 2, 1, 6, 5, 9, 3, 7},
        {2, 9, 6, 3, 8, 4, 1, 8, 7, 5}

        };
    

    identityRes = is_identity(array);

    cout << "identity array result (1 for true, 0 for false): " << identityRes << endl;
    
    return 0;

}

TO FINISH