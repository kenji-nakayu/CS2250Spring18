/*
 * =====================================================================================
 *
 *       Filename:  compStrings.c
 *
 *    Description:  Compare string values
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:05:21 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>     //For string functions, such as comparing strings.

// Main Function
int main()
{
    char word[51];
    char word2[51];

    printf("Enter a word:\n");
    scanf(" %s", word);

    printf("You entered [%s]\n", word);

    // Compare strings.
    if(strcmp(word, "Hello") == 0)
    {
        printf("You entered \"Hello\"\n")
    }
    else
    {
        printf("You did not enter \"Hello\"\n")
    }

    //Copy strings
    strcpy(word2, word); // word2 == word
    printf("[%s] and [%s]\n", word, word2);


    return 0;
}
// Function Definitions


