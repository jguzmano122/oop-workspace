// Function that sums all elements from a given array 

int array_sum(int array[], int n)
{
    if (n < 1) {

        return 0;

    } 
    int total = 0;
    for (int i = 0; i < n; i++) {

            total += array[i];
        
    } return total;
   
    }
    

