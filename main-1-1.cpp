#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int array_sum(int[], int);

int main() {
    int array[] = {};
    std::cout << "The sum of elements in the array is: " << array_sum(array, 0) << std::endl;
}