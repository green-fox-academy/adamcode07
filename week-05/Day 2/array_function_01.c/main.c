#include <stdio.h>
#include <stdlib.h>

int* sort_that_array(int *array, int length, int *new_array);
int gimme_zat_numbr(int *array, int *length);
int index_returner(int *array, int length, int num);

int main()
{
    int array[50];
    int len = 0;
    int num = 5;
    int new_array[len];

    gimme_zat_numbr(array, &len);
    sort_that_array(array, len, new_array);
    index_returner(new_array, len, num);

    return 0;
}

int* sort_that_array(int *array, int length, int *new_array){



    for(int i =0; i <length; i++){
        new_array[i] = array[i];
    }

    for (int i = 0; i < length; ++i)
    {
        for (int j = i + 1; j < length; ++j)
        {
            if (new_array[i] > new_array[j])
            {
                int a =  new_array[i];
                new_array[i] = new_array[j];
                new_array[j] = a;
            }
        }
    }
    printf("The numbers arranged in ascending order are given below \n");

    for (int i = 0; i < length; ++i){
        printf("%d\n", array[i]);
        }
    for (int i = 0; i < length; ++i){
        printf("%d\n", new_array[i]);
        }


        return new_array;
}

int gimme_zat_numbr(int *array, int *length){

    printf("Enter the value of N \n");
    scanf("%d", length);
    printf("Enter the numbers \n");
    for (int i = 0; i < *length; ++i)
        scanf("%d", &array[i]);
}

int index_returner(int *array, int length, int num){

    int i;
    for(i = 0; i < length; i++){
        if (array[i] == num){
                printf("%d", i);
                return(i);  /* it was found */
        }
    }
    printf("Not found\n");
    return(-1);  /* if it was not found */
}

/* Create a function that takes an array as argument and it's length. Determine the right data types to do this.
 * This function should order the arguments in ascending order and return this in a new sorted array.
 *
 * Create a second function that takes 3 arguments. An array, it's length and a number it is searching for.
 * The function should return the index of the number when found or -1 if it's not part of the array.
 * IMPORTANT: this function expects a sorted array and uses the strategy we used when we play guess the number.
 *
 *
 * In the main function create an unsorted array filled with random numbers, Make it 50 long.
 * Try 2 scenarios:
 *    * In the first: You pick a random element in the unsorted array and check at which index it is after the array is sorted.
 *    * In the second: You pick a number You are sure is not in the array. Check whether the search function returns the right number.
 * Print out what You need to check these.
 */
