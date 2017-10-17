#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	float val;
	char str[5];
	strcpy(str, "3.14");

	//TODO: print out the value of pi, first as a string, then a float value.

    strcpy(str, "3.14");

    printf("Pi value: %s\n", str);
    printf("Pi value: %.2f\n", str);

	return(0);
}
