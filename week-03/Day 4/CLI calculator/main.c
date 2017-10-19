#include <stdio.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>


COORD coord = {0,0};
void help();
void set_cursor_pos(int x, int y);
float summition();
float subtraction();

int main ()
{
    char command [100];
    char* op_1;
    char* op_2;
    float input_1, input_2;
    float result;

    help();
    set_cursor_pos(5, 5);
    int x, y;

    while(strcmp(command, "exit") != 0){

        gets(command);
    //    getchar();

        if (strcmp(command, "clear") == 0){
            system("cls");
        }
        if (strcmp(command, "help") == 0){
            help();
        }

        if  (strstr(command, "+") != 0){

            summition(command);
        }

        if (strstr(command, "-") != 0){

            subtraction(command);


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

float summition(char (command[]))
{
    char* op_1;
    char* op_2;
    float input_1, input_2;
    float result = 0;

    op_1 = strtok(command, "+");
    op_2 = strtok(NULL, "+");

    input_1 = atof(op_1);
    input_2 = atof(op_2);

    result = input_1 + input_2;

    printf("%.2f", result);
}

float subtraction(char (command[]))
{
    char* op_1;
    char* op_2;
    float input_1, input_2;
    float result;

    op_1 = strtok(command, "-");
    op_2 = strtok(NULL, "-");

    input_1 = atof(op_1);
    input_2 = atof(op_2);

    result = input_1 - input_2;

    printf("%2.f", result);
}
