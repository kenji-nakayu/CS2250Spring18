/*
 * =====================================================================================
 *
 *       Filename:  homework4.c
 *
 *    Description:  Create the program for the assignment 4.14 in ZyBooks. 
 *
 *        Version:  1.0
 *        Created:  02/10/2018 05:57:44 PM
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
    int baseH, baseW, headW;

    printf("Enter arrow base height:\n");
    scanf("%d", &baseH);
    printf("Enter arrow base width:\n");
    scanf("%d", &baseW);
    printf("Enter arrow head width:\n");
    scanf("%d", &headW);

    while(headW <= baseW)
    {
       // printf("Arrow head width must be greater than arrow base width.\n");
    printf("Enter arrow head width:\n");
    scanf("%d", &headW);
    }

    printf("\n");

    for (int i = 1; i <= baseH; ++i)
    {
        for(int j = 1; j <= baseW; ++j)
        {
            printf("*");
        }
        printf("\n");
    }

    for(int i = headW; i >= 1; --i)
    {
        for(int j = i; j >= 1; --j)
        {
            printf("*");
        }
        printf("\n");
    }




    return 0;
}
// Function Definitions


