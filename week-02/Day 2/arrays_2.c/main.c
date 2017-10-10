#include <stdio.h>

int main() {
    char char_array[] = {'a', 'b', 'c', 'd'};
    char char_array_the_same[] = "abcd";

	//TODO:
    // Print out the two arrays character-by-character

    char i;
        for(i = 0; i < sizeof(char_array); i++)
            printf("%c \n", char_array[i]);
    //    char i;
      //  for(i = 0; i < sizeof(char_array_the_same); i++)
        //    printf("%c \n", char_array_the_same[i]);
    //    for(i = 0; i < sizeof(my_name_array); i++){
      //      printf("%c \n", my_name_array[i]);
	//TODO:
    // What is the difference between the arrays?

    return 0;
}
