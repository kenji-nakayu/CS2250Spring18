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
