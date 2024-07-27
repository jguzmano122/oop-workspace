// main file to run function-3-1.cpp

#include <iostream>

extern bool is_fanarray(int array[], int n);

int main() {
    int array[6] = {8, 9, 10, 10, 9, 8};

  bool result = (is_fanarray(array, 6));
    
    std::cout << std::boolalpha; //  I/O manipulator to pring bool values as true/false
    std::cout << result << std::endl; // printing the bool value assigned to "result"
  
  }
