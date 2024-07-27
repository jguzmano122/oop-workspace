// Function that given an array of integers, and its length, determine if the array is a 'fan' array, i.e. the entire array
// is a palindrome with the numbers in ascending order from the start to the middle element. e.g. {1,2,3,2,1} and {2,4,4,2} 

bool is_fanarray(int array[], int n) {

     if (n < 1) {
        
        return false;

    } else {

    for (int i = 0; i < n/2; i++){

        if (array[i] != array[n - 1 - i]){
            return false; 
        }

    } return true;

}
}

