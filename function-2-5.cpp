// Function that given an array of integers and its length, will determine if the elements are in descending order or not, that is, each element is less than or equal to the previous element

bool is_descending(int array[], int n){
    
 if (n < 1) {
        
        return false;

    } else {
    int start = array[0]; // taking the first element to start and then compare to the rest of elements

        for (int i = 1; i < n; i++) {

                if (array[i] > array[i - 1]){
            return false;
                }
        } 
        
   
    
    return true;

    }



}

