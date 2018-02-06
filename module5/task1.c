/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Multiplication tables 1-10, with while loops
 *
 *        Version:  1.0
 *        Created:  02/06/2018 09:41:08 AM
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
const int MIN = 1;
const int MAX = 10;

// Function Prototypes

// Main Function
int main()
{
    int row, column, num;

    row = MIN;
    column = MIN;

    while(row <= MAX)
    {
        column = MIN;
        while(column <= MAX)
        {
        num = row * column;
        /* if(num < 10)
        {printf("[  %d] ", num);
        }
        else if (num < 100)
        {printf("[ %d] ", num);
        }
        else{
        printf("[%d] ", num);
        } */
        printf("[%3d] ", num); 
        //Using %3d prints three digits from the int
        //This makes the previous if statements unneccesary
        column += 1;}
        printf("\n");
        row += 1;
    }



    return 0;
}
// Function Definitions


