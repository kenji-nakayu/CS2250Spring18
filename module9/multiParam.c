/*
 * =====================================================================================
 *
 *       Filename:  multiParam.c
 *
 *    Description:  Pass multiple parameters to functions
 *
 *        Version:  1.0
 *        Created:  03/20/2018 08:44:35 AM
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
struct Dude
{
    int age;
    double weight;
}; // Do not forget the semicolon to end structure declaration


typedef struct SuperDude
{
    int age;
    double weight;
    char sex;
}SuperDude; // Do not forget the semicolon to end structure declaration

// Function Prototypes
void ShowInfo(int age, double weight);
void ShowInfoStruct(SuperDude sd);

// Main Function
int main()
{
    //int a = 22;
    //double w = 175.2;

    struct Dude man1;
    man1.age = 22; //Use the dot . operator to access members of struct
    man1.weight = 175.2;

    ShowInfo(man1.age, man1.weight);

    SuperDude man2;
    man2.age = 19;
    man2.weight = 199.9;
    man2.sex = 'M';

    ShowInfoStruct(man2);

    return 0;
}
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
