#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a = 54325;
    char buffer[20];

    //TODO: make an integer to string conversion with itoa(), first in binary, then decimal format
    int itoa(i, buffer, 2);
    printf("binary: %s\n", buffer);
    int itoa(i, buffer, 10);
    printf("decimal: %s\n", buffer);
    // Store the string in buffer

    return 0;
}
