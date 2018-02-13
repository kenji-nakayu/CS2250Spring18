/*
 * =====================================================================================
 *
 *       Filename:  guessNum.c
 *
 *    Description:  Guessing game
 *
 *        Version:  1.0
 *        Created:  02/13/2018 09:28:53 AM
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
const int LEN = 5; //Number of guesses
const int NUM = 20; //

// Main Function
int main()
{

    // 1) Create a random number between 0-NUM
    // 2) Ask the user to enter a guess number 0-NUM
    //    Capture all input in an array.
    // 3) IF the number is less than the random number
    //    print go higher, else print go lower (unless the right number is guessed)
    // 4) You have LEN chances to guess the correct number
    // 5) Display all the choices you entered
    //
    // 2.2) Validate that input is within range

    int ans; //The number to be guessed
    int input[LEN]; //The array for capturing input
    int stop; //Placeholder for the i value to stop printing at.
    int winner; //using an integer to store the win condition

    srand((int)time(0));
    ans = rand() % (NUM + 1); // Sets the random number to be between
        // 0 and NUM, inclusive
    
    //FIXME: Add game instructions for the user
    printf("Welcome to the guessing game!\n");
    printf("You goal is to guess a random number between 0 and %d.\n", NUM);
    printf("You will have %d guesses.\n", LEN);


    stop = -1;
    winner = 0;

    for(int i = 0; i < LEN; ++i)
    {
        printf("Enter a number between 0 and %d:\n", NUM);
        scanf("%d", &input[i]);

        if((input[i] < 0) || (input[i] > NUM))
        {
            printf("You entered an invalid input.\n");
            --i;
            continue;
        }

        if(input[i] > ans) // Guess is too high
        {
            printf("Too high. Guess lower.\n");
        }
        else if(input[i] < ans) // Guess is too low
        {
            printf("Too low. Guess higher.\n");
        }
        else if(input[i] == ans) //Guess is correct
        {
            winner = 1;
            stop = i;
            break;
        }
        else //Just in case something goes wrong
        {
            printf("Oops! Something went wrong.\n");
        }
    }

    if(stop == -1)
    {
        stop = LEN;
    }

    if(winner != 0)
    {
        printf("You won!\n");
    }
    else
    {printf("Sorry, you lost.\n");}

    printf("Your guesses were ");

    for(int i = 0; i <= stop; ++i)
    {
        if(i == stop)
        {printf("and ");}
        printf("[%d] ", input[i]);
        if(i == stop)
        {break;}
    }
    printf("\n");
    printf("The answer was [%d]\n", ans);

    printf("Thank you for playing!\n");




    return 0;
}
// Function Definitions


