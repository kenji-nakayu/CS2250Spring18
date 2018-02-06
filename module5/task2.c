/*
 * =====================================================================================
 *
 *       Filename:  task2.c
 *
 *    Description:  Test for a positive number
 *
 *        Version:  1.0
 *        Created:  02/06/2018 10:07:20 AM
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
    int num;
    printf("Enter a positive number >= 0: \n");
    scanf("%d", &num);

    while(1)
    {
        if (num >= 0)
        {break;}
        else
        {   printf("Enter a positive number >= 0: \n");
    scanf("%d", &num);
        }
    }

    printf("Thank you for following the instructions.\n");

    return 0;
}
// Function Definitions


