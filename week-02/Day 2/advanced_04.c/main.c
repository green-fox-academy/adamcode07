#include <stdio.h>
#include <limits.h>

int main()
{
    //write a program which loads up fully a 50-sized integer array starting from 200 in descending order
    //but your array should contain elements which are divisible by 5 and 17
    //print out the array

    int my_array[50];
    int len = INT_MIN;
    int counter = 0;

    //printf("%d", strlen(my_array));


    for (int i = 200; i > len; i--)
    {
        if (i % 5 == 0 && i % 17 == 0)
        {
            my_array[counter] = i;
            counter++;
        }
    }

    for (int i = 0; i < 50; i++)
    {
        printf("%d\n", my_array[i]);
    }

    return 0;
}
