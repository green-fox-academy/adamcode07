#include <stdio.h>

int main()
{
    int arr[20];
    int freq[20];
    int len, counter;

    // TODO: write a program which asks for a number, that will be the
//real size of the array (20 elements are allocated, that's the maximum size)
    // Then load up the array with integer values
    // Finally print all unique elements in array
    printf("Please give me the size of the array\n");
    scanf("%d", &len);

    printf("\n");

    for (int i = 0; i < len; i++)
    {
        printf("Please give me the element of the array\n");
        scanf("%d", &arr[i]);
    }

    printf("\n");

    //for (int i = 0; i < len; i++){
      //  printf("%d\n", arr[i]);  }

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                counter++;
                freq[j] = 0;
            }
        }
    }
    printf("\nFrequency of all elements of array : \n");
    for(int i=0; i<len; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
//    freq[i] = counter;


    return 0;
}
