/*
 * =====================================================================================
 *
 *       Filename:  arrayMultTable.c
 *
 *    Description:  Use arrays to make a multiplication table
 *
 *        Version:  1.0
 *        Created:  02/13/2018 08:47:25 AM
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
const int ROW_MAX = 10; //  Instead of using predefined dimensions,
const int COL_MAX = 10; // we could prompt for user entered dimensions
//However, doing so would require additional coding
//to be sure that the table doesn't get to unmanageable sizes

// Main Function
int main()
{

    int table[ROW_MAX][COL_MAX];

    for(int i = 1; i <= ROW_MAX; ++i)
    {
        for(int j = 1; j <= COL_MAX; ++j)
        {
            table[i-1][j-1] = i * j;
        }
    }

    for(int i = 0; i < ROW_MAX; ++i)
    {
        for(int j = 0; j < COL_MAX; ++j)
        {
            printf("[%3d] ", table[i][j]);
        }
        printf("\n");
    }


    return 0;
}
