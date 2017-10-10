#include <stdio.h>
int main()
{
    //as you know, a character is represented as a numeric value(ASCII value) in the memory
    //write a function which asks for one charcter and prints out the character in character format then in ASCII too
    char c;
    printf("Type in one character then press enter: ");
    c = getchar();

    //char_to_ascii();

   printf("Character entered: ");
   int a;
   a = 0;
   while(a<255)
   {
    printf("%c = %d\\n",a,a);
    a++;
   }
  //  putchar(a);
    getch();


   return(0);
}
