#include <stdio.h>
#include <string.h>

int main()
{
    printf("Type in a sentence:\n\n");
    char string[256];

    //TODO: write a c program which, splits a string to words by space
	//solve the problem with the proper string.h function


    gets(string);
    char* token;
    token = strtok(string, " ");

    while (token != NULL)
    {
       printf("%s\n", token);
       token = strtok(NULL, " ");
    }

    return(0);
}
