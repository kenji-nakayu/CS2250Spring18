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
#include <stdlib.h>
#include <time.h>
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
 * ===  FUNCTION  =====================================================================
 *         Name:  ShowInfoStruct
 *  Description:  Show information by passing a structure parameter
 * =====================================================================================
 */
void ShowInfoStruct(const SuperDude* sd)
{
    printf("Your age is [%d]\n", sd->age);
    printf("Your weight is [%.1lf]\n", sd->weight);
    printf("Your sex is [%c]\n", sd->sex);

    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  InitRandDude
 *  Description:  Intializes the Dude parameter with random values
 * =====================================================================================
 */
void InitRandDude(SuperDude* sd)
{

    //When using the address of a Struct, the dereference can be
    //either (*param).element or simply
    // param->element; in other words,
    // -> can replace the dereference and member operators

    sd->age = rand() % 100;
    sd->weight = (double)(((rand() % 2000) / 10.0) + 100.0);
    (*sd).sex = (char)((rand()/1000 % 26) + 'A');

    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  InitAllRand
 *  Description:  Intializes an Array of Superdudes
 * =====================================================================================
 */
void InitRandAll(SuperDude sdarr[])
{
    srand((int)time(0)); //Setting the seed

    for(int i = 0; i < NUM_PEOPLE; ++i)
    {
        InitRandDude(&sdarr[i]);
    }
    
    return;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CopyInfoStruct
 *  Description:  Return the values stored in the structure parameter
 * =====================================================================================
 */
SuperDude CopyInfoStruct(const SuperDude* sd)
{
    return *sd;
}

/*
 * ===  FUNCTION  ======================================================================
 *         Name:  UpdateInfoStruct
 *  Description:  Update values (int, doubles) from struct by some weight
 * =====================================================================================
 */
void UpdateInfoStruct(SuperDude* sd, int myWeight)
{
    sd->age *= myWeight;
    (*sd).weight = (*sd).weight * myWeight;
    //Although syntax is different notation, the two statements
    //perform equivalent operations.

    return;
}


void ShowInfoAll(const SuperDude sdarr[])
{
    for(int i = 0; i < NUM_PEOPLE; ++i)
    {
    printf("Person %d:\n", i + 1);
    ShowInfoStruct(&sdarr[i]);
    printf("\n");
    }

    //Alternatively, the array members can be accessed by using
    //index and dot operators. For example,
    //printf("[i] Member info [%d] [%.2lf] [%c]\n",
    // i, sdarr[i].age, sdarr[i].weight, sdarr[i].sex);

    return;
}

