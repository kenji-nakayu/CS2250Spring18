/*
 * =====================================================================================
 *
 *       Filename:  index.c
 *
 *    Description:  Use index notation to access specific characters in strings
 *
 *        Version:  1.0
 *        Created:  01/25/2018 08:43:26 AM
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
    // 1) Define two strings for first and last name
    char firstName[20], lastName[20];
    // 2) Get first name info
    printf("Enter your first name:\n");
    scanf("%s", firstName);
    // 3) Get last name info
    printf("Enter your last name:\n");
    scanf("%s", lastName);
    // 4) Display initials
    printf("Hello %s %s!\n", firstName, lastName);
    //To access individual characters of an array, use
    //Index notation with [ ]
    printf("Your initials are %c. %c.\n", firstName[0], lastName[0]);

    return 0;
}
// Function Definitions


