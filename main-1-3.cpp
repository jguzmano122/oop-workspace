// main file to run function-1-3
#include <iostream> 
using namespace std;


extern void count_digits(int array[4][4]); 

int main(){

   int array [4][4] = {{3, 1, 4, 6},
                    {0, 2, 9, 8},
                    {2, 6, 3, 1},
                    {4, 7, 8, 2},
                    
    };


count_digits(array);

return 0;


}