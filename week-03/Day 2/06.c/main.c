#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f_array[10] = {5.6, 8.73, 0.15, 0.99, 1.5, 6.3589, 10.01, -33.0, 0, 15};
    int i_array[10];
    int i = 0;

	//TODO: write a program, which copies the values from the given array to an integer array
	  //memcpy(i_array, f_array, strlen(f_array)+1);
    //print out the elements of the integer array, with the "%d" format specifier
    for(i = 0; i < 10; i++){
    i_array[i] = f_array[i];
    printf("Element %d is %d\n", i+1, i_array[i]);
    }
    //what do you see?

    return 0;
}
