// main file to run function-1-4.cpp


#include <iostream>

extern int count_evens(int number);

int main() {
    
    std::cout << "Total of even numbers between 1 and given number: " << count_evens(122) << std::endl;
}