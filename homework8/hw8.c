/*
 * =====================================================================================
 *
 *       Filename:  hw8.c
 *
 *    Description:  Zybooks 6.18 Ch 6 Program: Authoring assistant (C)
 *
 *        Version:  1.0
 *        Created:  03/20/2018 05:41:50 PM
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
const int STR_SIZE = 512;
// Function Prototypes
void RemoveNewline(char userString[]);
char PrintMenu(char userString[]);
int GetNumOfNonWSCharacters(const char userString[]);
int GetNumOfWords(const char userString[]);
void FixCapitalization(char userString[]);
void ReplaceExclamation(char userString[]);
void ShortenSpace(char userString[]);

// Main Function
int main()
{
    char textIn[STR_SIZE];
    char quit;

    printf("Enter a sample text:\n");
    fgets(textIn, STR_SIZE, stdin);
    RemoveNewline(textIn);
    printf("\nYou entered: %s\n\n", textIn);

    do
    {
        quit = PrintMenu(textIn);
    } while(quit != 'q');

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
char PrintMenu(char userString[])
{
    char option;

    printf("MENU\nc - Number of non-whitespace characters\n");
    printf("w - Number of words\nf - Fix capitalization\n");
    printf("r - Replace all !'s\ns - Shorten spaces\n");
    printf("q - Quit\n\nChoose an option:\n");

    scanf(" %c", &option);

    switch(option)
    {
        case 'q':
            //printf("Quitting program.\n");
            break;
        case 'c':
            printf("Number of non-whitespace characters: %d\n\n",
                    GetNumOfNonWSCharacters(userString));
            break;
        case 'w':
            printf("Number of words: %d\n\n",
                    GetNumOfWords(userString));
            break;
        case 'f':
            FixCapitalization(userString);
            printf("Edited text: %s\n\n", userString);
            break;
        case 'r':
            ReplaceExclamation(userString);
            printf("Edited text: %s\n\n", userString);
            break;
        case 's':
            ShortenSpace(userString);
            printf("Edited text: %s\n\n", userString);
            break;
        default: 
            printf("Invalid input. Please enter a valid input.\n");
    }

    return option;
}
int GetNumOfNonWSCharacters(const char userString[])
{
    int count = 0;

    for(int i = 0; i < strlen(userString); ++i)
    {
        if(isspace(userString[i]))
        {continue;}
        else
        {++count;}
    }

    return count;
}
int GetNumOfWords(const char userString[])
{
    int count = 0;
    int flag = 0;

    for(int i = 0; i < strlen(userString); ++i)
    {
        if((flag == 0) && isalnum(userString[i]))
        {
            flag = 1;
            count++;
        }
        else if(userString[i] == '-' || userString[i] == '\'')
        { continue; }
        else if((flag == 1) && (!isalnum(userString[i])))
        {
            flag = 0;
        }
    }

    return count;
}
void FixCapitalization(char userString[])
{
    int flag = 1;

    for(int i = 0; i < strlen(userString); ++i)
    {
        if((flag == 1) && isalpha(userString[i]))
        {
            flag = 0;
            userString[i] = toupper(userString[i]);
        }
        if(userString[i] == '.' || userString[i] == '!' || userString[i] == '?') 
        {
            flag = 1;
        }
    }

    return;
}
void ReplaceExclamation(char userString[])
{
    for(int i = 0; i < strlen(userString); ++i)
    {
        if(userString[i] == '!')
        {
            userString[i] = '.';
        }
    }
    
    return;
}
void ShortenSpace(char userString[])
{
    for(int i = 1; i < strlen(userString); ++i)
    {
        if((userString[i] == ' ') && (userString[i - 1] == ' '))
        {
            for(int j = i; j < strlen(userString); ++j)
            {
                userString[j] = userString[j + 1];
            }
            i = 1;
        }
    }

    return;
}
