// main file to run function-1-4
#include <iostream> 
using namespace std;

extern void print_scaled(int array[3][3],int scale);

int scale = 3;

int main() {


   int array [3][3] = {{4, 6, 5},
                    {2, 9, 8},
                    {6, 3, 1},
                    
    };



    print_scaled(array, scale);


    return 0;
}