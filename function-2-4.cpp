// Function to determine the max and min elements in an arry and then return their sum
#include <iostream> 
using namespace std;

// Function signature to find min
 int array_min(int integers[], int length){
    int min = integers[0];

    for (int i = 1; i < length; i++){

        if (integers[i] < min){

            min = integers[i];
        }
    }   
        return min;
    
 }

// Function signature to find max
int array_max(int integers[], int length){
    int max = integers[0];

    for (int i = 1; i < length; i++){

        if (integers[i] > max){

            max = integers[i];
        }
    }  
        return max;
}

// Function signature to find sum 
int sum_min_max(int integers[], int length){
    int sum = 0;
    if (length <= 0) {
        sum = -1;
    } else {
    int min = array_min(integers, length);
    int max = array_max (integers, length);
    
    sum = min + max;

    cout << sum << endl;
    

    } return sum;
   }



