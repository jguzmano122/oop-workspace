// main file to run function-2-1
#include <iostream> 
using namespace std;

extern void print_binay_str(std::string decimal_number);

int main() {

    string decimalStr  = "57";
    print_binay_str (decimalStr);

    return 0;

}