/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Create a 10 digit array with random numbers
 *                  between 0 - 100
 *
 *        Version:  1.0
 *        Created:  02/13/2018 09:06:40 AM
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
const int LENGTH = 10;

// Function Prototypes

// Main Function
int main()
{
    int array[LENGTH];
    
    srand((int)time(0)); //Initializes the random seed with the current time

    for(int i = 0; i < LENGTH; ++i)
    {
        array[i] = rand()%101; // Modulus 101 returns a number between 0 and 100
    }

    for(int i = 0; i < LENGTH; ++i)
    {
        printf("Random number %d is [%d]\n", i + 1, array[i]);
    }
    

    return 0;
}
// Function Definitions


