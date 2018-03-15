/*
 * =====================================================================================
 *
 *       Filename:  superlib.c
 *
 *    Description:  The definitions for the superlib.h file
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:50:59 AM
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
#include <ctype.h>
#include "superlib.h"

// Function Definitions
void StrSpaceToChar(char modString[], char sep)
{
    int i = 0; // Loop index
    for(i = 0; i < strlen(modString); ++i)
    {
        if(modString[i] == ' ')
        {
            modString[i] = sep;
        }
    }
    return;
}

//Function counts number of digits 0-9 in a string
//Takes one argument string to analyze
int StrCountDigits(char userString[])
{
    int numDigits = 0;

    int i = 0; // Loop index
    for(i = 0; i < strlen(userString); ++i)
    {
        if(isdigit(userString[i]))
        {
            ++numDigits;
        }
    }
    return numDigits;
}

//Function takes an input string and replaces the string with 
void RemoveNewLine(char userString[])
{
    for(int i = 0; i < strlen(userString); ++i)
    {
        if(userString[i] == '\n')
        {
            userString[i] = '\0';
            break;
        }
    }

    return;
}
