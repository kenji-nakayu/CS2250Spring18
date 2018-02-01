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
#include <stdbool.h>     //For Boolean variables

// Constants

// Function Prototypes

// Main Function
int main()
{
    int score;
    bool success = true;

    printf("Enter your score:\n");
    scanf("%d", &score);

    if ( score > 100 )
    {
        printf("You got an A+! You got extra credit!\n");
    }
    else if (score >= 90)
    {
        printf("You got an A.\n");
    }
    else if (score >= 80)
    {
        printf("You got a B.\n");
    }
    else if (score >= 70)
    {
        printf("You got a C.\n");
    }
    else if (score >= 0)
    {
        printf("You got an E. You will need to take the class again.\n");
        success = false;
    }
    else
    {
        printf("You got an F. You failed so badly that your score was negative.\n");
        success = false;
    }

    if(success)
    {
        printf("Congratulations! You passed!\n");
    }
    else
    {
        printf("See you again next semester.\n");
    }


    return 0;
}
// Function Definitions


