/*
 * =====================================================================================
 *
 *       Filename:  sentences.c
 *
 *    Description:  Capture full strings including spaces
 *
 *        Version:  1.0
 *        Created:  03/13/2018 08:34:32 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
//#include <string.h>

// Constants
const int STR_SIZE = 128;

// Function Prototypes
void RemoveNewLine(char inarray[]);

// Main Function
int main()
{
    char fullName[STR_SIZE];
    
    printf("Please enter your full name:\n");
    //scanf("%s", fullName);

    //char *fgets(char *s, int size, FILE *stream);
    //fgets(string pointer; size of string to get; location to get from);
    fgets(fullName, STR_SIZE, stdin); //stdin gets the standard input

    //function strlen from the string library
    //will return the length of a given character string

    RemoveNewLine(fullName);

    printf("Hello [%s]\n", fullName);

    return 0;
}
// Function Definitions

void RemoveNewLine(char inarray[])
{
    for(int i = 0; i < STR_SIZE; ++i)
    {
        if(inarray[i] == '\n')
        {
            inarray[i] = '\0';
            break;
        }
    }

    return;
}
