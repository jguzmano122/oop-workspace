// main file to run function-2-5.cpp

#include <iostream>

extern bool is_descending(int array[], int n);


int main() {
    int array[5] = {19, 9, 9, 8, 7};

  bool result = (is_descending(array, 5));
    
    std::cout << std::boolalpha; //  I/O manipulator to pring bool values as true/false
    std::cout << result << std::endl; // printing the bool value assigned to "result"
  
  }





