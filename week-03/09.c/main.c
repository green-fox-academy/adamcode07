#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void binary_adder (char *bin_op_1, char *bin_op_2);

//TODO: write a program which asks for two binary numbers.
//write a function, which prints out the sum of the 2 binary numbers.

void binary_adder(a, b);

int main()
{

    char a[20];
    char b[20];

    printf("Give me a binary number: ");
    scanf("%s", &a);
    printf("Give me another binary number: ");
    scanf("%s", &b);

    binary_adder(a, b);

    return(0);
}

void binary_adder(char *bin_op_1, char *bin_op_2)
{
    long a = strtol(bin_op_1, NULL, 2);
    long b = strtol(bin_op_2, NULL, 2);
    long sum = a + b;
    char buffer[20];

    itoa(sum, buffer, 2);

    printf("%s\n", buffer);

}
