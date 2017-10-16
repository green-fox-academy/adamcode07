#include <stdio.h>
#include <stdlib.h>

int players_guess = 0;
int lives = 5;

int main(){

srand(time(NULL));
int computers_number = rand() % 100;
//printf("%d", computers_number);
  for(int i = 0; i < 6; i++) {
    printf("Guess a number between 1 and 100 \n");
    scanf("%d, \n", &players_guess);

    lives--;

    if(players_guess > computers_number) {
        printf("Too high. You have %d lives left \n", lives);
    } else if (players_guess < computers_number){
        printf("Too low. You have %d lives left \n", lives);
    } else if (players_guess == computers_number){
        printf("Congratulations");
    }
  }
    if(lives == 0){
        printf("You lost");
    }

    return 0;
}
