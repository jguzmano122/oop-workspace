// main file to run function-2-4.cpp

#include <iostream>

extern bool is_ascending(int array[], int n);


int main() {
    int array[5] = {1, 3, 3, 7, 9};

  bool result = (is_ascending(array, 5));
    
    std::cout << std::boolalpha; //  I/O manipulator to pring bool values as true/false
    std::cout << result << std::endl; // printing the bool value assigned to "result"
  
  }



