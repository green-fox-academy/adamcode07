#include <stdio.h>
#include <string.h>

int main()
{
    printf("Type in a sentence:\n\n");
    char str[256];

    //TODO: write a c program which, splits a string to words by space
	//solve the problem with the proper string.h function
    gets(str);

    char * pch;
    printf ("Splitting string \"%s\" into tokens:\n",str);
    pch = strtok (str," ");
    while (pch != NULL)
        {
    printf ("%s\n",pch);
    pch = strtok (NULL, " ");
  }


    return(0);
}
