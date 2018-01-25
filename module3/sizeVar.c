/*
 * =====================================================================================
 *
 *       Filename:  sizeVar.c
 *
 *    Description:  Learn about the size capacity of different variables (in bytes)
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:00:13 AM
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
    int num = 1;
    unsigned int unum = 1;
    num = num * 10000;
    unum = unum * 10000;
    //the sizeof function returns the size of the variable in bytes
    printf("The size of int is [%ld]\n", sizeof(int));
    printf("The size of unsigned int is [%ld]\n", sizeof(unum));
    printf("num = [%d]. unum=[%u]\n", num, unum);
    num *= 10000; //Compound operator
    unum *= 10000; //Compound operator
    printf("num = [%d]. unum=[%u]\n", num, unum);
    num *= 10000; //Compound operator
    unum *= 10000; //Compound operator
    printf("num = [%d]. unum=[%u]\n", num, unum);
    printf("num = [%u]. unum=[%d]\n", num, unum);
    //What is the range of an int?
    //2^32 = 4294967296
    //Range: -2147483648 to + 2147483647;
    //Range of unsigned int is 0 to 4294967296

    return 0;
}
// Function Definitions


