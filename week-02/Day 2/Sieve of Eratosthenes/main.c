#include <stdio.h>
#include <stdlib.h>

int main()
{

    int prime_array[100];

    for (int i = 0; i < 100; i++)
    {
        if (i % 2 != 0 && i % 3 != 0)
        {
            printf("%d\n", i);
        }
    }


    return 0;
}
