// main file to run function-2-2.cpp

#include <iostream>

extern int max_element(int array[], int n);

int main() {
    int array[5] = {200, 189, -199, 5, -1};
    std::cout << "The smallest number in the array is: " << max_element(array, 5) << std::endl;
}
