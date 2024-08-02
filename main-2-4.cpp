// main file to run function-2-4
#include <iostream> 
using namespace std;

extern int sum_min_max(int integers[], int length);

int main() {
    int sum = 0;
   int length = 0;
 int integers [0] = {};


sum = sum_min_max (integers, length); // function call
cout << sum << endl;

    return 0;
}
