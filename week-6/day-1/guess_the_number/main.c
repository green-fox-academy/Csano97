#include <stdio.h>

int main()
{
    int number_to_guess = 13;
    int player_guess;
    printf("Guess the number:\n");
    scanf("%d", &player_guess);
    while(player_guess < number_to_guess) {
        printf("The guessed number is too low\n");
        printf("Guess the number:\n");
        scanf("%d", &player_guess);
    }while(player_guess > number_to_guess){
        printf("The guessed number is too high\n");
        printf("Guess the number:\n");
        scanf("%d", &player_guess);
    }if(player_guess == number_to_guess){
        printf("Congratulations!\n");
        printf("You guessed the correct number!\n");
    }
    return 0;
}