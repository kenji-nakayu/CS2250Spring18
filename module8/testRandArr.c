/*
 * =====================================================================================
 *
 *       Filename:  testRandArr.c
 *
 *    Description:  Test random array functions
 *
 *        Version:  1.0
 *        Created:  03/15/2018 09:13:10 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "randArr.h"

// Main Function
int main()
{
    int newArray[A_SIZE]; //const A_SIZE comes from the randArr.h file

    InitRandArray(newArray);

    printf("Random array before sort:\n");

    DisplayArray(newArray);

    printf("Random array after sort:\n");

    SortArrayAsc(newArray);

    DisplayArray(newArray);

    return 0;
}
