/*
 * =====================================================================================
 *
 *       Filename:  funcStr.c
 *
 *    Description:  Use a string function
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:06:03 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
//Constants
const int INPUT_STR_SIZE = 50; //Input string size
// Main Function
int main()
{
    char userStr[INPUT_STR_SIZE]; //Input string from user
    char userChar = '\t';

    //Prompt user for input
    printf("Enter a string with spaces:\n ");
    fgets(modString, INPUT_STR_SIZE, stdin);

    //Call function to modify user defined string
    StrSpaceToChar(userStr, userChar);

    printf("String with hyphens: %s\n", userStr);

    return 0;
}


