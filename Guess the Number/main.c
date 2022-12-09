#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Starting point
* Return: 0
* Description: This program generates a random number
* for the user to guess.
*/

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber = rand() % 21;
    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20 which you must guess.\n");

    for (int i = 5; i > 0; --i){
        printf("You have %d tr%s left.\n", i, i == 1 ? "y" : "ies");
        int num;
        while(num){
            printf("Enter a guess: ");
            scanf("%d", &num);
            if(num > 0 && num < 20)
                break;
        }
        if(num == randomNumber){
            printf("Congratulations. You guessed it!\n");
            break;
        } else if(num > randomNumber){
            if (i == 1) {
                printf("You have exhausted your trials\n");
                printf("The number was %d", randomNumber);
            } else
                printf("Sorry, %d is wrong. My number is less than that\n", num);
            continue;
        } else {
            if (i == 1) {
                printf("You have exhausted your trials\n");
                printf("The number was %d", randomNumber);
            } else
                printf("Sorry, %d is wrong. My number is more than that\n", num);
            continue;
        }
    }

    return 0;
}
