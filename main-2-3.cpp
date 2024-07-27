// main file to run function-2-3.cpp

#include <iostream>

extern void two_five_nine(int array[], int n);

int main() {
    int array[16] = {2, 2, 2, 2, 5, 5, 5, 1, 892, 0, -9, 9, 9, 9, 9, 9};
    
    two_five_nine (array, 16); // fuction call

    int array2[] = {};
    
    two_five_nine (array2, 0); // fuction call
}
