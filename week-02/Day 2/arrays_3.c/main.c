#include <stdio.h>

int main() {
    int int_array[] = {1, 654, 987, 654, 31};
    float float_array[] = {1.2, 3.14, 1.41, 0.707, 1.73};

	//int i;
      //  for(i = 0; i < sizeof(int_array); i++)
        //    printf("%c \n", int_array[i]);

    float i;
        for(i = 0; i < sizeof(float_array); i++)
            printf("%f \n", float_array[i]);
	//TODO:
    // Print out the content of the arrays

    return 0;
}
