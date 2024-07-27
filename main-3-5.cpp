// main file to run function-3-5.cpp
#include <iostream>

extern double sum_even(double array[], int n);


int main(){

double array[0] = {};
    
    double sumEvens = sum_even (array, 0); // fuction call
    std::cout << sumEvens << std::endl;
}