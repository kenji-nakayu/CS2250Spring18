/*
 * =====================================================================================
 *
 *       Filename:  floatDiv.c
 *
 *    Description:  Learn about float division
 *
 *        Version:  1.0
 *        Created:  01/18/2018 09:24:05 AM
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

// Function Prototypes

// Main Function
int main()
{
    int age = 25;
    int grade = 3;
    double result;
    int iresult;

    result = age/(float)grade;
    printf("Result = %lf\n", result);
    iresult = age/(float)grade;
    printf("iResult = %d\n", iresult);
    printf("Result = %d\n", (int)result);

    return 0;
}
// Function Definitions


