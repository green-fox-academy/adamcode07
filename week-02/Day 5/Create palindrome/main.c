#include <stdio.h>
#include <stdlib.h>


int create_palidrome()
{
    char string_a[100] = "akkor";

    int n = strlen(string_a);

    printf("%s", string_a);
    for(int i = n - 1 ; i >= 0 ; i--)
        printf("%c" , string_a[i]);

    //using the strrev function
//    strrev(string_a);
  //  printf("%s", string_a);
}

int main()
{
    create_palidrome();

    return 0;
}
