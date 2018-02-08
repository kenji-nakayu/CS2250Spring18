/*
 * =====================================================================================
 *
 *       Filename:  forLoop.c
 *
 *    Description:  Practice using the "for" loop
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:34:29 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Main Function
int main()
{
    //For loop.
    //1) Initialize your condition
    //2) Do your work
    //3) Update condition
    //If still true, continue work
    //Else, finish loop.
    //Print Hello 3 times
    int rounds = 3;
    
    //While loop version
    while(rounds != 0)
    {
        printf("Hello there with while loop.\n");
        rounds -= 1;
    }

    //For loop version
    rounds = 3;
    for(int r = 0; r < rounds; r++)
    {
        printf("Hello there with for loop.\n");
    }

    //show difference between prefix and postfix ++
    printf("rounds = [%d]\n", rounds);
    printf("rounds = [%d]\n", rounds++);
    printf("rounds = [%d]\n", rounds);
    printf("rounds = [%d]\n", ++rounds);
    printf("rounds = [%d]\n", rounds);
    printf("rounds = [%d]\n", --rounds);
    printf("rounds = [%d]\n", rounds);


    return 0;
}
// Function Definitions


