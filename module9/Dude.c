/*
 * =====================================================================================
 *
 *       Filename:  Dude.c
 *
 *    Description:  Function definitions for Dude functions
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:20:04 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "Dude.h"


// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfo
 *  Description:  Displays information about the parameters
 * =====================================================================================
 *
 * //To make a fancy function description like the above
 * //using the current plugin, sit on command line and
 * // enter ,cfu 
 */
void ShowInfo(int age, double weight)
{
    printf("Your age is [%d]\n", age);
    printf("Your weight is [%.1lf]\n", weight);
    
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfoStruct
 *  Description:  Show information by passing a structure parameter
 * =====================================================================================
 */
void ShowInfoStruct(SuperDude sd)
{
    printf("Your age is [%d]\n", sd.age);
    printf("Your weight is [%.1lf]\n", sd.weight);
    printf("Your sex is [%c]\n", sd.sex);

    return;
}
