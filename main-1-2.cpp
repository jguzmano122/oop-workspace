// main file to run function-1-2.cpp

#include <iostream>

extern double array_mean(int[], int);

int main() {
    int array[] = {};
    std::cout << "The average of the array's elements is: " << static_cast<float> (array_mean(array, 0)) << std::endl;
}