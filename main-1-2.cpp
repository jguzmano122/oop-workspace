// main file to run function-1-2.cpp

#include <iostream>

extern double array_mean(int[], int);

int main() {
    int array[3] = {10, 0, 0};
    double average = (array_mean(array, 3));
    std::cout << "The average of the array's elements is: " << average  << std::endl;
}