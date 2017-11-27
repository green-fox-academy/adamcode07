#include <stdio.h>
#include <string.h>

int main()
{
    char str[55] ="This is a string for testing";
	char *pch;

    pch = strtok (str, "i");
    while (pch != NULL)
        {
    printf ("%s\n",pch);
    pch = strtok (NULL, "i");
        }


ysolti

    return(0);
}
