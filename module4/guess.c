/*
 * =====================================================================================
 *
 *       Filename:  guess.c
 *
 *    Description:  Create a simple guessing game with three tries
 *
 *        Version:  1.0
 *        Created:  01/30/2018 08:48:03 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int input1, input2, input3, guess;

    srand(time(0));
    guess = ( rand() % 10) + 1;

    printf("Guess a number between 1 and 10\n");
    scanf("%d", &input1);

    if(input1 == guess){
        printf("You won! The number was %d!\n", guess);
    }
    else{
        printf("Your guess was wrong. You guessed %d.\nGuess another number between 1 and 10:\n", input1);
        scanf("%d", &input2);
        if(input2 == input1){
            printf("You already guessed %d.\nGuess a number between 1 and 10 other than %d:\n", input1, input1);
            scanf("%d", &input2);
        }
        if(input2 == guess){
            printf("You won! The number was %d!\n", guess);
        }
        else{
            printf("Your second guess was also wrong.\nYou have guessed %d and %d.\nYou get one final guess.\nGuess another number from 1 to 10:\n", input1, input2);
            scanf("%d", &input3);
            if((input3 == input1) || (input3 == input2)){
            printf("You have already guessed %d and %d.\nGuess a number between 1 and 10 other than %d and %d:\n", input1, input2, input1, input2);
            scanf("%d", &input3);
            }
            if(input3 == guess) {
                printf("You won! The number was %d!\n", guess);
            }
            else{
                printf("You lost. The number was %d.\n", guess);
            }
        }
    }


    return 0;
}
// Function Definitions


