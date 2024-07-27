// main file to run function-2-1.cpp

#include <iostream>

extern int min_element(int array[], int n);

int main() {
    int array[5] = {2, 199, -199, 5, -1};
    std::cout << "The smallest number in the array is: " << min_element(array, 5) << std::endl;
}