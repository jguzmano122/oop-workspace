// Function that returns the maximum element in an integer array

int max_element(int array[], int n){

if (n < 1) {

        return 0;

    } 
    int max = array[0]; // taking the first element of the array as maximum and then compare the rest of elements

    for (int i = 1; i < n; i++) {

            if (array[i] > max){
            max = array[i];
            }
    } return max;


}



