#include <stdio.h>

/*
    This is the function hackerrank required.
    Author: @Nkzlxs
*/
int saveThePrisoner(int n, int m, int s)
{
    // Making the variable a little bit readable
    int num_sweets = m, num_prisoner = n, start_pos = s;

    /*
        Amount to be added in the chosen starting position

        (There's no need for a for loop to loop through all the candy available
         that is restricted by the amount of prisoner)(or vice versa)
    */
    int offset = (num_sweets % num_prisoner -1);

    // Adding offset
    int answer = start_pos + offset;

    /*  
        (Occurs when the warned prisoner has a lower number than the starting position)
    */
    if (answer > num_prisoner)
    {
        return answer - num_prisoner;
    }
    /* 
        (Occurs when starting postion is the first prisoner, and the warned prisoner is the last one)
    */
    else if (answer < 1)
    {
        return num_prisoner - answer;
    }
    else
    {
        return answer;
    }
}
