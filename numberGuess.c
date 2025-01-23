#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int myNum, userGuess, attempts; 
    
    srand(time(NULL)); //Random number between 1-10 is generated and stored
    myNum = rand() % 10 + 1;

    printf("How many attempts would you like?\n"); //Prompts and stores how many attempts the user would like to have.
    scanf("%d", &attempts);

    while(attempts > 0) {
        printf("Guess a number between 1-10: "); //If attempts still remain, prompts the user to give their guess, congratulates them upon a successful guess.
        scanf("%d", &userGuess);
        if(userGuess == myNum) {
            printf("Congratulations, you got it right!\n"); 
            break;
            
        } else if(userGuess > myNum) {
            printf("Wrong, too high! Attempts remaining: %d\n", --attempts); //Informs the user if their guess is too low or too high and deducts an attempt.
        } else {
            printf("Wrong, too low! Attempts remaining: %d\n", --attempts);
        }

    } if (attempts == 0) {
        printf("Out of attempts! The number was %d!\n", myNum); //If out of attempts, reject further attempts, and return hidden number.
    }
    
    return 0;
}