#include <stdio.h>

int main() {
    char my_name_array[] = "My Name";
        int i;
        for(i = 0; i < sizeof(my_name_array); i++){
            printf("%c \n", my_name_array[i]);
        }

/*      printf("%c \n", my_name_array[1]);
        printf("%c \n", my_name_array[2]);
        printf("%c \n", my_name_array[3]);
        printf("%c \n", my_name_array[4]);
        printf("%c \n", my_name_array[5]);
        printf("%c \n", my_name_array[6]);
        printf("%c \n", my_name_array[7]);
*/
	//TODO:
    // Print out the array character-by-character

    return 0;
}
