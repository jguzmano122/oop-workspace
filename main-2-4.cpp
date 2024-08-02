// main file to run function-2-4
#include <iostream> 
using namespace std;

extern int sum_min_max(int integers[], int length);

int main() {
    int sum = 0;
   int length = 6;
 int integers [6] = {4, 6, 5, 6, 10, -100};


sum = sum_min_max (integers, length); // function call


    return 0;
}
