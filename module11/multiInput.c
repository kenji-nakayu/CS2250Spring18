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
#include <string.h>

// Constants

// Function Prototypes
void Help(void);

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
    if(scanf("%2d:%2d %2s", &hour, &minutes, ampm) != 3)
    {
        printf("Invalid input format.\n");
        Help();
        return -1;
    }
    else if((hour > 12) || (hour < 1) || (minutes > 59) || (minutes < 0))
    {
        printf("Invalid input format.\n");
        Help();
        return -1;
    }
    else if(strcmp(ampm, "AM") && strcmp(ampm, "PM"))
    {
        printf("Invalid input format.\n");
        Help();
        return -1;
    }
    else
    {
        printf("You entered %2d:%02d %2s\n", hour, minutes, ampm);
    }

    //ci"
    //change insert " quote marker
    //From command line, entering ci" will delete the selection
    //between the quote marks and then enter Insert mod

    return 0;
}
// Function Definitions
void Help(void)
{
    printf("Please enter time in the format HH:MM AM/PM\n");
    printf("For example, 12:27 PM\n");
    printf("Hours should be between 1 and 12\n");
    printf("Minutes should be between 0 and 59\n");
    printf("AM/PM should be capital letters, as \"AM\" or \"PM\"\n");
    return;
}
