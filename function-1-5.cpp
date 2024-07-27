//  For loop, count the number of even numbers between 1 and a number we supply (inclusive)

int count_evens(int number)
{
    if (number < 1) {

        return 0;

    } 

    int count = 0;
    for (int i = 1; i <= number; i++){
        if (i % 2 == 0) {
            count ++;
        }
    } return count; 

}