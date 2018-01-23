/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  Learn about how to use character arrays (strings)
 *
 *        Version:  1.0
 *        Created:  01/23/2018 10:04:43 AM
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
    char name[21]; // Allocate 20 chars + NULL char (/0)

    printf("Enter your name:\n");
    //Note: If you use an array (such as a string)
    //DO NOT use the & address operator
    scanf("%s", name);

    printf("Your name is [%s]\n", name);

    return 0;
}
// Function Definitions


