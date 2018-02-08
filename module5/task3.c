/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  Create a multiplication table 1 - 10 with for loops.
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:52:08 AM
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
const int ROW = 10;
const int COL = 10;
// Main Function
int main()
{
    //To auto-align the text within a bracket, 
    //sit on a bracket and type =% on the command line 

    for(int r = 1; r <= ROW; r++)
    {
        for(int c = 1; c <= COL; c++)
        {
            printf("[%3d] ", r * c);
        }
        printf("\n");
    }


    return 0;
}
// Function Definitions


