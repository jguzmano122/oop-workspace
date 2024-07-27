// Function that given a character 'A','B','C','D' or 'E' representing a grade, uses a switch statement print out
// if this is a pass or fail. Print "Nothing" if the character given is not a valid grade

#include <iostream>

void print_pass_fail(char grade){

switch (grade)
{
    case 'A':           
        std::cout << "Pass" << std::endl;
        break;
   case 'B':           
        std::cout << "Pass" << std::endl;
        break;
    case 'C':           
        std::cout << "Pass" << std::endl;
        break;
    case 'D':           
        std::cout << "Fail" << std::endl;
        break;
    case 'E':           
        std::cout << "Fail" << std::endl;
        break;
    
    default:
        std::cout << "Nothing" << std::endl;
        break;

    }
} 
  
