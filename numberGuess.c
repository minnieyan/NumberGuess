#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int myNum, userGuess, attempts, infiniteAttempts = 0; 
    
    srand(time(NULL));
    myNum = rand() % 10 + 1;

    printf("How many attempts would you like? (Enter 0 for Infinite): ");
    scanf("%d", &attempts);

    if (attempts == 0) {
        infiniteAttempts = 1;
    }

    while(attempts > 0 || infiniteAttempts == 1) {
        printf("Guess a number between 1-10: ");
        scanf("%d", &userGuess);
        if (userGuess > 10 || userGuess < 1) {
            printf("Guess is out of bounds, the number is between 1-10.\n");
        } else {
            if (userGuess == myNum) {
                printf("Congratulations, you got it right!\n");
                break;
            } else if(userGuess > myNum) {
                printf("Wrong, too high! ");
            } else {
                printf("Wrong, too low! ");
            }
            if (infiniteAttempts == 0) {
                attempts--;
            }
            if (infiniteAttempts == 0) {
                printf("Attempts remaining: %d\n", attempts);
            } else {
                printf("\n");
            }
        }

    } if (attempts == 0 && infiniteAttempts == 0) {
        printf("Out of attempts! The number was %d!\n", myNum);
    }
    
    return 0;
}