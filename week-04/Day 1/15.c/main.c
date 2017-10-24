#include <stdio.h>

void reverse_name(char *name, char *reversed_name);

int main(void)
{
	char name[] = "Gipsz Jakab";

    char reversed[50];

    //write a function which reverse a name's last name and first name. Use a void function. Put your 'return' value in the second parameter.
    reverse_name(name, reversed);


}

void reverse_name(char *name, char *reversed_name)
{
    int i = 0;
    while(name[i] != ' '){
    reversed_name[i] = name[i];
    }
    reversed_name[i] = ' ';
    printf("%s", reversed_name);
}
