// main file to run function-1-3.cpp

#include <iostream>

extern int num_count(int array[], int n, int number);

int main() {
    int number = 3;
    int array[5] = {3, 3, 3 , 5, 3};
    std::cout << "Elements equal to 'number': " << num_count(array, 5, 3) << std::endl;
}