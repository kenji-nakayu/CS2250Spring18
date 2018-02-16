/*
 * =====================================================================================
 *
 *       Filename:  hw6warmup.c
 *
 *    Description: ZyBooks 5.16 Ch5 Warm up: People's weights 
 *
 *        Version:  1.0
 *        Created:  02/15/2018 06:08:03 PM
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
    double weights[5];
    double total, ave, max;

    for(int i = 1; i <= 5; ++i)
    {
        printf("Enter weight %d:\n", i);
        scanf("%lf", &weights[i-1]);
    }

    printf("You entered: ");

    for(int i = 0; i < 5; ++i)
    {
        printf("%lf ", weights[i]);
    }
    
    printf("\n\n");

    total = 0;
    ave = 0;
    max = 0;

    for(int i = 0; i < 5; ++i)
    {
        total += weights[i];
        if(weights[i] > max)
        {
            max = weights[i];
        }
    }

    ave = total / 5.0;

    printf("Total weight: %lf\n", total);
    printf("Average weight: %lf\n", ave);
    printf("Max weight: %lf\n", max);

    return 0;
}
// Function Definitions


