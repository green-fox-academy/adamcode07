#include <stdio.h>

int my_strlen(char *string)

{
    int i;
    for(i = 0; string[i] != '\0'; i++){}
    return i;
}

int main()
{
	char my_string[50] = "Hello wlorld!";

	//TODO: implement your own strlen function.
	int len = my_strlen(my_string);
	printf("%d", len);

	return 0;
}
