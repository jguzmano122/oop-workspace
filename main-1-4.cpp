// main file to run function-1-4.cpp

#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int array[] = {0, 3, 9, 5, 3};
    int secondarray[] = {2, 4, 6, 0, -1};
    
    std::cout << "Total sum of elements of both arrays is: " << sum_two_arrays(array, secondarray, 5) << std::endl;
}