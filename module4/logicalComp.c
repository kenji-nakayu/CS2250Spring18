/*
 * =====================================================================================
 *
 *       Filename:  logicalComp.c
 *
 *    Description:  Use logical statements to detect values within a range.
 *
 *        Version:  1.0
 *        Created:  02/01/2018 08:33:57 AM
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
    int score;
    char grade;

    printf("Enter your score:\n");
    scanf("%d", &score);

    if ( (100 >= score) && (score >= 90))
    {
        grade = 'A';
    }
    else if ((90 > score) && (score >= 80))
    {
        grade = 'B';
    }
    else if ((80 > score) && (score >= 70))
    {
        grade = 'C';
    }
    else if ((70 > score) && (score >= 0))
    {
        grade = 'E';
    }
    else
    {
        grade = '?';
    }
    printf("Your grade is %c.\n", grade);

    if(score > 100)
    {
        printf("You got extra credit!\n");
    }
    if(score < 0)
    {
        printf("Sorry. You failed so badly that your score is negative.\n");
    }

   


    return 0;
}
// Function Definitions


