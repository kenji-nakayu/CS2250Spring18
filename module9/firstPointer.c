/*
 * =====================================================================================
 *
 *       Filename:  firstPointer.c
 *
 *    Description:  Implement use of first pointers
 *
 *        Version:  1.0
 *        Created:  03/22/2018 09:56:57 AM
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
    int i = 5;
    //A pointer to an integer
    int* pi = NULL;

    printf("Value of  i[%14d] \taddress[%p]\n", i, &i);
    printf("Value of pi[%14p] \taddress[%p]\n", pi, &pi);

    //Assign value to pointer
    pi = &i;
    printf("Value of pi[%14p] \taddress[%p]\n", pi, &pi);

    //Modify integer through pointer
    printf("\n");
    *pi = 6;
    printf("Value of  i[%14d] \taddress[%p]\n", i, &i);
    printf("Value of pi[%14p] \taddress[%p] value@pi[%d]\n", pi, &pi, *pi);
    i = 99;

    printf("\n");
    printf("Value of  i[%14d] \t address[%14p]\n", i, &i);
    printf("Value of pi[%14p] \tvalue@pi[%14d]\n", pi, *pi);

    return 0;
}
// Function Definitions


