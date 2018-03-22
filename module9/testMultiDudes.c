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
#include "Dude.h"

// Main Function
int main()
{

    SuperDude people[NUM_PEOPLE];
    //Const NUM_PEOPLE is defined in the header file.

    InitRandAll(people);
    ShowInfoAll(people);

    printf("\n");
    SuperDude clone3;

    clone3 = CopyInfoStruct(&people[2]);

    printf("Clone of Person 3:\n");
    ShowInfoStruct(&clone3);

    return 0;
}
// Function Definitions


