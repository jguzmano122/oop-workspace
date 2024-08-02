// main file to run function-1-3
#include <iostream> 
using namespace std;


extern void count_digits(int array[5][5]); 

int main(){

   int array [5][5] = {{3, 1, 4, 6, 5},
                    {7, 0, 2, 9, 8},
                    {5, 2, 6, 3, 1},
                    {0, 4, 7, 8, 2},
                    {9, 3, 5, 1, 6}
    };


count_digits(array);

return 0;


}