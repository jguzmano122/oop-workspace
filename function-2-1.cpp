// Function that given an array of integers and its length, will find the minimum (smallest) number and return it

int min_element(int array[], int n){

if (n < 1) {

        return 0;

    } 
    int min = array[0]; // taking the first element of the array as minimum and then compare the rest of elements

    for (int i = 1; i < n; i++) {

            if (array[i] < min){
            min = array[i];
            }
    } return min;




}



