/*
 * =====================================================================================
 *
 *       Filename:  testMultiDudes.c
 *
 *    Description:  Test multiple structures in functions
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:37:43 AM
 *       Revision:  none
 *       Compiler:  gcc
 *       compile with command
 *       gcc testMultiDudes.c Dude.c -o testMultiDudes.c
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Dude.h"

// Constants
const int NUM_PEOPLE = 5;
// Function Prototypes

// Main Function
int main()
{
    srand((int)time(0)); //Setting the seed inside a function
 
    SuperDude people[NUM_PEOPLE];

    for(int i = 0; i < NUM_PEOPLE; ++i)
    {
        InitRandDude(&people[i]);
        printf("Person %d:\n", i + 1);
        ShowInfoStruct(&people[i]);
    }

    SuperDude clone3;

    clone3 = CopyInfoStruct(&people[2]);

    printf("Clone of Person 3:\n");
    ShowInfoStruct(&clone3);

    return 0;
}
// Function Definitions


