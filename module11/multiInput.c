/*
 * =====================================================================================
 *
 *       Filename:  multiInput.c
 *
 *    Description:  Capture multiple input with a scanf statement
 *
 *        Version:  1.0
 *        Created:  04/03/2018 08:42:19 AM
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

// Function Prototypes

// Main Function
int main()
{
    //int feet, inches;
    //printf("Enter feet and inches separated by a space:\n");
    //scanf("%d %d", &feet, &inches);
    //printf("You entered %d feet and %d inches\n", feet, inches);

    int hour, minutes;
    char ampm[3];
    printf("Enter a time in format HH:MM AM/PM\n");
    if(scanf("%d:%d %2c", &hour, &minutes, ampm) != 3)
    {
        printf("Invalid input format.\n");
    }
    else
    {
        printf("You entered %d:%d %s\n", hour, minutes, ampm);
    }

    //ci"
    //change insert " quote marker
    //From command line, entering ci" will delete the selection
    //between the quote marks and then enter Insert mod

    return 0;
}
// Function Definitions


