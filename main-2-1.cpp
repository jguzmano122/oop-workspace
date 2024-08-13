

#include<iostream>

using namespace std;

extern void hexDigits(int *numbers, int length);

int main(){

int length = 5;
int numbers [length] = {10, 1, 11, 2, 15};

hexDigits (numbers, length);


return 0;


}

