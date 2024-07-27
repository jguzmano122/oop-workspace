// main file to run function-1-1.cpp

#include <iostream>

extern int array_sum(int array[], int n);

int main() {
    int array[5] = {2, 3, 9, 5, 3};
    std::cout << "Total sum of elements in array: " << array_sum(array, 5) << std::endl;
}