/*
 * =====================================================================================
 *
 *       Filename:  reversefor.c
 *
 *    Description:  Use a decrementing for loop
 *
 *        Version:  1.0
 *        Created:  02/08/2018 10:01:33 AM
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
    char name[] = "Waldo Weber";

    printf("Hi [%s] you are [%d] bytes long\n", name, (int)sizeof(name));

    //print one char at a time
    for(int c = 0; c < ((int)sizeof(name) - 1) ; c++)
    {
        printf("[%c]\n", name[c]);
    }

    //Print name in reverse order
    
    printf("Now in reverse!\n\n");
    for(int c = ((int)sizeof(name) - 2); c >= 0; c--)
    {
        printf("[%c]\n", name[c]);
    }

    return 0;
}
// Function Definitions


