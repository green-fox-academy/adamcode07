#include <stdio.h>

int main() {
    char buffer[255];   // Buffer variable for user input
    //TODO:
    // Get the user's name with gets
    puts("Please input your name ");
    gets(buffer);
    //TODO:
    // Print it out with puts
    puts(buffer);
    //TODO:
    // Get the user's pet name with getch
    puts("Please input your pet's name ");
    int i = 0;
    char character = getchar();
    while (character != '\r'){
    buffer[i]= character;
    i++;
    character = getch();
    }
    buffer[i] = 0;
    //TODO:
    // Print it out

    printf("Pet is %s", buffer);

    return 0;
}
