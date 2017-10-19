#include <stdio.h>
#include <string.h>
#include <math.h>
#include <windows.h>


COORD coord = {0,0};
void help();
void set_cursor_pos(int x, int y);

int main ()
{
    char command [256];
    help();
    set_cursor_pos(5, 5);

    while(strcmp(command, "exit") != 0){
        gets(command);
        if(strcmp(command, "clear") == 0){
            system("cls");
            }
        if(strcmp(command, "help") == 0){
            help();
            }
    }

	return 0;
}

void help()
{

    printf("\n\n    	CLI Calculator\n");
    printf("====================================\n");
    printf("usage: [number] [operation] [number]\n");
    printf("Commands:\n\n");
    printf(" +	addition\n");
    printf(" -	subtraction\n");
    printf(" *	multiplication\n");
    printf(" /	division\n");
    printf(" %	division with remainder\n");
    printf(" ^	power\n");
    printf(" <	square root\n");
    printf(" log	logarithm\n");
    printf(" binto	binary to hex or dec\n");
    printf(" hexto	hexadecimal to bin or dec\n");
    printf(" decto	decimal to bin or hex\n");
    printf(" ====================================\n");
    printf(" exit	exiting from the program\n");
    printf(" clear	clear the screen\n");
    printf(" help	print usage\n");
    printf(" ====================================\n");
    printf(" Hit enter to start!\n");
    printf(" ====================================\n");
    getchar();
    system("cls");
}

void set_cursor_pos(int x, int y)
{
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

