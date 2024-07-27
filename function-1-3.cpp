// Function that returns the number of elements in an array that are equal to a given parameter - "number"

int num_count(int array[], int n, int number)
{
       if (n < 1) {

        return 0;

    } 

    int total = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] == number) {
            total ++;
        }
        
    } 
    return total;
   
    }
    
