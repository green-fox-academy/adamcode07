#include <stdio.h>
#include <string.h>

int main()
{
    //write a void function which asks for a number with scanf and print it out with printf, then asks for a name with gets, and print it out with puts
    //you will notice something is wrong
    //try to solve the problem
    int number;
    int num[5];

    void func();
        printf("Please input a number \n");
        scanf("%d", &number);
        getchar();
     //   fflush(stdin);
        printf("The number is %d \n", number);
        printf("Give me a string \n");
        gets(num);
        puts(num);

    return 0;
}
