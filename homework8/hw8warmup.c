/*
 * =====================================================================================
 *
 *       Filename:  hw8warmup.c
 *
 *    Description:  ZyBooks 6.17 Ch 6 Warm Up
 *
 *        Version:  1.0
 *        Created:  03/20/2018 04:47:47 PM
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

// Constants
const int STRING_SIZE = 128;
// Function Prototypes
void RemoveNewline(char userString[]);
void GetInputString(char userString[]);
int GetNumOfCharacters(char userString[]);
void OutputWithoutWhitespace(char userString[]);

// Main Function
int main()
{
    char input[STRING_SIZE];

    GetInputString(input);

    printf("\nYou entered: %s\n\n", input);

    printf("Number of characters: %d\n", GetNumOfCharacters(input));

    printf("String with no whitespace: ");
    OutputWithoutWhitespace(input);

    return 0;
}
// Function Definitions
void RemoveNewline(char userString[])
{
    for(int i = 0; i < strlen(userString); ++i)
    {
        if(userString[i] == '\n')
        {
            userString[i] = '\0';
        }
    }
    return;
}
void GetInputString(char userString[])
{
    printf("Enter a sentence or phrase:\n");
    fgets(userString, STRING_SIZE, stdin);
    RemoveNewline(userString);

    return;
}
int GetNumOfCharacters(char userString[])
{
    int num = 0;

    for(int i = 0; i < STRING_SIZE; ++i)
    {
        if(userString[i] == '\0')
        {
            break;
        }
        else
        {
            ++num;
        }

    }

    return num;
}

void OutputWithoutWhitespace(char userString[])
{
    for(int i = 0; i < strlen(userString); ++i)
    {
        if(isspace(userString[i]))
        { continue;}
        else
        {
            printf("%c", userString[i]);
        }
    }

    printf("\n");

    return;
}
