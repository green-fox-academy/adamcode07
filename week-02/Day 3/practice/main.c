/*
#include <stdio.h>

int main() {
    char my_name_array[] = "My Name";
    int i = 0;

    for(i = 0; i < my_name_array[i]; i++){
        printf("%c \n", my_name_array[i]);
    }

	//TODO:
    // Print out the array character-by-character

    return 0;
}


#include <stdio.h>

int main() {
    char char_array[] = {'a', 'b', 'c', 'd'};
    char char_array_the_same[] = "abcd";
	//TODO:
    // Print out the two arrays character-by-character
    for(int i = 0; i < char_array[i]; i++){
        printf("%c \n", char_array[i]);
    }

    for(int i = 0; i < char_array_the_same[i]; i++){
        printf("%c \n", char_array_the_same[i]);
    }
	//TODO:
    // What is the difference between the arrays?

    return 0;
}

#include <stdio.h>

int main() {
    int int_array[] = {1, 654, 987, 654, 31};
    float float_array[] = {1.2, 3.14, 1.41, 0.707, 1.73};

	//TODO:
    // Print out the content of the arrays
    for(int i = 0; i < sizeof(int_array)/4; i++){
        printf("%d \n", int_array[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("%.3f \n", float_array[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    char buffer[255];   // Buffer variable for user input

    //TODO:
    // Get the user's name with scanf
    printf("Please input your name \n");
    scanf("%s", buffer);
    //TODO:
    // Print it out with printf
    printf("%s", buffer);

    return 0;
}

#include <stdio.h>

int main() {
    char buffer[255];   // Buffer variable for user input
    char c;
    //TODO:
    // Get the user's name with gets
    printf("Input user's name \n");
    gets(buffer);
    //TODO:
    // Print it out with puts
    puts(buffer);
    //TODO:
    // Get the user's pet name with getch
    printf("Enter pets name \n");
    c = getchar();
    //TODO:
    // Print it out
    printf("Character entered: ");
    putchar(c);


    return 0;
}

#include <stdio.h>

void char_to_ascii()
    {
     char ch = 'a';

     ch = getchar();

     printf("%c\n %d", ch, ch);
    }

int main()
{
    char_to_ascii();
    //as you know, a character is represented as a numeric value(ASCII value) in the memory
    //write a function which asks for one charcter and prints out the character in character format then in ASCII too
    printf("Type in one character then press enter: ");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int speed_of_sound = 340; //  [m/s]

int give_me_distance()
{
    //calculate the distance between you and a lighting
    //the sound of it reaches you in 5 seconds
    //distance = time * speed_of_sound

    int time = 5; // [s]
    int distance;

    distance = time * speed_of_sound;

    return distance;
    //as you can see the time and the distance is a local variable, we can only
    //access them in this function (with these values), but the speed_of_sound is a global variable
    //we can use it without any declaration
}

int give_me_distance_in_km()
{
    //calculate the distance again but this time the result
    //this time the sound reaches you in 50 seconds
    //should be in kilometers

    int divider = 1000;
    int time = 50; // [s]
    int distance;
    distance = time * speed_of_sound / divider;

    return distance;

    //here we have a third local variable called divider

}

//as you can see local variable values can use the same name
//like time and distance and have a different values
//think about the given functions as well, are we usng them correctly?

int main()
{
    printf("%d \n", give_me_distance());
    printf("%d \n", give_me_distance_in_km());

	return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Tom, Mark and Jerry went to the supermarket
//help them decide what can they buy out of their money

int tom_money = 2000;
int mark_money = 3500;
int jerry_money = 1200;

int can_they_buy_a_new_tv()
{
    int tv_price = 6950;

    int new_tv =(tom_money + mark_money + jerry_money) - tv_price;
    if (new_tv >= 0) {
        printf("Yes,and they still have %d $ left", new_tv);
    } else {
        printf("They need %d$ more", abs(new_tv));
    }
    //if they can, the program should write out that how much
    //money they have after they bought the tv
    //if they can't tell, how much money they need to buy it
}

int can_they_make_a_cake()
{
    int milk = 200;
    int chocolate = 340;
    int flour = 75;
    int egg = 345;
    int sugar = 160;
    int salt = 90;
    int oven_shape = 330;
    int cream = 220;

    //if they can buy all these stuff calculate how much
    //each of them should pay to share the bill equally
}

int can_they_make_ham_and_eggs()
{
    int milk = 200;
    int egg = 345;
    int salt = 90;
    int ham = 450;
    int onion = 60;
    int spice = 25;

    //if they can buy all these stuff calculate how much
    //each of them should pay to share the bill equally
}

//is there any local or global variables we did not use well?
//are we using functions correctly?

int main()
{

    can_they_buy_a_new_tv();

	return 0;

}

#include <stdio.h>

void char_to_ascii();

int main()
{
    //as you know, a character is represented as a numeric value(ASCII value) in the memory
    //write a function which asks for one charcter and prints out the character in character format then in ASCII too
    char_to_ascii();

    return 0;
}

void char_to_ascii(){
    char a;
    printf("Type in one character then press enter: ");
    scanf("%c", &a);
    printf("Tha ASCII code of '%c' is: %d", a, a);
}

#include <stdio.h>

void char_to_ascii();

int main()
{
    //as you know, a character is represented as a numeric value(ASCII value) in the memory
    //write a function which asks for one charcter and prints out the character in character format then in ASCII too
    printf("Type in one character then press enter: ");

    char_to_ascii();

    return 0;
}

    void char_to_ascii(){
        char ch = getchar();

        printf("%c\t%d\n", ch, ch);
    }
*/
#include <stdio.h>

/*
Write a program where you have five functions
first the program should ask for an integer, then
these functions should do various mathematical operations on a given integer
last but not least there should be a variable which counts how many operations
have been done on the given integer
*/

int main()
    {
        int c = 0;
        printf("Please type in a number \n");
        scanf("%d", &c);

        printf("%d", c);
        return 0;
    }
