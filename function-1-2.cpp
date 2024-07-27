// Function that returns the average of all elements in an integer array

double array_mean(int array[], int n)
{
       if (n < 1) {

        return 0;

    } 

    float total = 0;
    float average = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] > 0) {
            total += array[i];
        }
        
    } 
    average = total / n;
    return average;
   
    }
    
