/*
 * =====================================================================================
 *
 *       Filename:  randArr.c
 *
 *    Description:  Function definitions for random array functions
 *
 *        Version:  1.0
 *        Created:  03/15/2018 09:17:44 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "randArr.h"

//Constants

// Function Definitions
// Initialize array with random number between 0-99
void InitRandArray(int userArr[])
{
    srand((int)time(0));

    for(int i = 0; i < A_SIZE; ++i)
    {
        userArr[i] = rand() % 100;
    }

    return;
}

//Display array content
void DisplayArray(int userArr[])
{
    for(int i = 0; i < A_SIZE; ++i)
    {
        printf("[%02d] ", userArr[i]);
    }
    
    printf("\n");
    
    return;
}

//Sort the array into ascending order
void SortArrayAsc(int userArr[])
{
    int temp;

    for(int i = 0; i < A_SIZE; ++i)
    {
        for(int j = 0; j < i; ++j)
        {
            if(userArr[i] < userArr[j])
            {
                temp = userArr[i];
                userArr[i] = userArr[j];
                userArr[j] = temp;
            }
        }
    }

    return;
}

