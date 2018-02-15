/*
 * =====================================================================================
 *
 *       Filename:  guessNum.c
 *
 *    Description:  Guessing game with a loop to prompt user to keep playing.
 *                  Use a do while loop instead of a regular while loop.
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

//Optional FIXME: Add an option for different difficulty levels.

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
    int again; //integer to check for already entered input.
    char keepPlaying; // = 'y'; initialization is not required for a do-while loop.
    
    //fixed: Add game instructions for the user
    printf("Welcome to the guessing game!\n");
    printf("You goal is to guess a random number between 0 and %d.\n", NUM);
    printf("You will have %d guesses.\n", LEN);

    srand((int)time(0));


    do
    {

    ans = rand() % (NUM + 1); // Sets the random number to be between
        // 0 and NUM, inclusive

    stop = -1;
    winner = 0;

    for(int i = 0; i < LEN; ++i)
    {
        printf("Enter a number between 0 and %d:\n", NUM);
        scanf("%d", &input[i]);

        //check for invalid input
        if((input[i] < 0) || (input[i] > NUM))
        {
            printf("You entered an invalid input.\n");
            --i;
            continue;
        }

        //fixed: Check for guesses already entered
        again = 0;

        for(int j = 0; j < i; ++j)
        {
            if(input[j] == input[i])
            { again = 1;}
        }

        if(again)
        {
            printf("You have already guessed ");

            for(int j = 0; j < i; ++j)
            {
                if(j == i - 1)
                {printf("and ");}
                printf("[%d] ", input[j]);
                if(j == i - 1)
                {break;}
            }
            printf("\n");
            printf("Please guess a different number\n");

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
        stop = LEN - 1;
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

    //New task; when complete, ask if player wants to play again.
    // 'y' for yes; 'n' for no.
    // if YES, play again.
    // If no, quit.

    printf("Would you like to play again? (y/n)\n");
    scanf(" %c", &keepPlaying);

    while((keepPlaying != 'y') && (keepPlaying != 'n'))
    {
        printf("Sorry, but you entered an invalid input.\n");
        printf("Please enter lowercase \"y\" or \"n\".\n");
        printf("Would you like to play again? (y/n)\n");
        scanf("%c", &keepPlaying);
    }




    } while(keepPlaying == 'y');
    //As a note, sitting on one curly and entering "\%" will take you to the corresponding curly brace.

    printf("Thank you for playing!\n");




    return 0;
}
// Function Definitions


