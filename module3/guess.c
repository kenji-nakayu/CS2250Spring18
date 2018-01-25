/*
 * =====================================================================================
 *
 *       Filename:  guess.c
 *
 *    Description:  Guess a number between 1 and 10 and win a prize
 *
 *        Version:  1.0
 *        Created:  01/25/2018 10:07:45 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> //includes rand() and srand()
#include <time.h> // includes time()
// Constants

// Function Prototypes

// Main Function
int main()
{
    int input, guess;

    printf("Please enter a number from 1 to 10:");
    scanf("%d", &input);
    //Calculate the guess number
    srand((int)time(0)); //Set the random seed
    guess = ( rand() % 10 ) + 1; // get the random number
    printf("You entered [%d] and guess is [%d]\n", input, guess);



    return 0;
}
// Function Definitions


