/*
 * =====================================================================================
 *
 *       Filename:  random.c
 *
 *    Description:  Learn how to use random numbers.
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:51:56 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> //Needed in order to use rand() function.
#include <time.h> //Needed in order to use srand() function (based on time)

// Constants

// Function Prototypes

// Main Function
int main()
{
    //Set your random seed
    srand((int)time(0));
    printf("A random num [%d]\n", rand()%100);
    printf("A random num [%d]\n", rand()%100);
    printf("A random num [%d]\n", rand()%100);
    printf("A random num [%d]\n", rand()%100);
    printf("A random num [%d]\n", rand()%100);
    printf("A random num [%d]\n", rand()%100);

    return 0;
}
// Function Definitions


