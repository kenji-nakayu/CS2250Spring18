/*
 * =====================================================================================
 *
 *       Filename:  arrays.c
 *
 *    Description:  Learn how arrays work
 *
 *        Version:  1.0
 *        Created:  02/13/2018 08:44:30 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
const int LENGTH = 20;

// Function Prototypes

// Main Function
int main()
{
    int array[LENGTH];

    array[0] = 33; // first member
    array[1] = 22; // first member
    array[2] = 66; // first member
    array[3] = 99; // first member

    //print information
    printf("First value %d\n", array[0]);
    printf("Fourth value %d\n", array[3]);

    //Initialize the full array
    for(int i = 0; i < LENGTH; ++i)
    {
        //TASK: Initialize index positions divisible by 3 to be 0
        //Else, set it to -99

        if( (i % 3) == 0)
        {
            array[i] = 0;
        }
        else
        {
            array[i] = -99; //initialize to 99
        }
    }

    //Iterate over the full array
    for(int i = 0; i < LENGTH; ++i)
    {
        printf("The %d value is %d\n", i + 1, array[i]);
    }


    return 0;
}
// Function Definitions


