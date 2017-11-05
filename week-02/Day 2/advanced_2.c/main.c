/*
#include <stdio.h>
#include <limits.h>

int main()
{
	int number_array[8] = {48, 59, 2, -8, 55, 56, 78, 12};

    int max = INT_MIN;
    int max2 = INT_MIN;
    int i;
	//TODO:
	// Write a C program to find the two largest element in an array using only 1 for loop
	// From <limits.h> use INT_MIN: this is the least integer
    for (i = 0; i < 8; i++)
    {
        if (number_array[i] > max)
        {
            max = number_array[i];
        }
    }
        //my first try
        //else if (max2 != max){
          //  number_array[i] > max2;
            //max2 = number_array[i];
    //first with 2 loops
    for (i = 0; i < 8; i++){
        if (number_array[i] > max2 && number_array[i] < max)
        {
            max2 = number_array[i];
        }
    }
    printf("%d %d", max, max2);

	return 0;
}
*/
#include <stdio.h>
#include <limits.h>

int main()
{
	int number_array[8] = {48, 59, 2, -8, 55, 56, 78, 12};

    int max = INT_MIN;
    int max2 = INT_MIN;
    int i;
	//TODO:
	// Write a C program to find the two largest element in an array using only 1 for loop
	// From <limits.h> use INT_MIN: this is the least integer
    for (i = 0; i < 8; i++)
    {
        if (number_array[i] > max)
        {
            max2 = max;
            max = number_array[i];
        }
        else if (number_array[i] > max2 && number_array[i] != max)
            max2 = number_array[i];
        else if (max == max2)
            max2 = number_array[i];
    }

    printf("%d %d", max, max2);

	return 0;
}
