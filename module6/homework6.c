/*
 * =====================================================================================
 *
 *       Filename:  homework6.c
 *
 *    Description:  Programming Assignment M6
 *
 *        Version:  1.0
 *        Created:  02/15/2018 09:39:20 AM
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
const int PLAYERS = 5;

// Main Function
int main()
{
    //0.0) Declare variables; 
    //integer arrays to store user entered values
    int jersey[PLAYERS];
    int rating[PLAYERS];
    //char for following the menu options
    char option;
    //1.0) Capture initial values
    for(int i = 1; i <= PLAYERS; ++i)
    {
        printf("Enter player %d's jersey number:\n", i);
        scanf("%d", &jersey[i-1]);
        printf("Enter player %d's rating:\n", i);
        scanf("%d", &rating[i-1]);
        printf("\n");
    }

    printf("ROSTER\n");
    for(int i = 1; i <= PLAYERS; ++i)
    {
        printf("Player %d -- Jersey number: %d, Rating: %d\n", i, jersey[i-1], rating[i-1]);
    }

    //2.0) Display the menu.
    do
    {
        printf("\nMenu\n");
        printf("u - Update player rating\n");
        printf("a - Output players above a rating\n");
        printf("r - Replace player\n");
        printf("o - Output roster\n");
        printf("q - Quit\n");
        printf("\nChoose an option:\n");
        scanf(" %c", & option);

    //FIXME: Implement actual menu functions. For now, just display appropriate input.
    //4.0) Implement the "Update player rating menu option"
    if(option == 'u')
    {
        printf("You entered 'u'\n");
    }
    //5.0) Implement the "Output players above a rating" menu option
    else if(option == 'a')
    {
        printf("You entered 'a'\n");
    }
    //6.0) Implement the "Replace player" menu option
    else if(option == 'r')
    {
        printf("You entered 'r'\n");
    }
    //3.0) Implement the "Output roster" menu option
    else if(option == 'o')
    {
        printf("\nROSTER\n");
        for(int i = 1; i <= PLAYERS; ++i)
        {
            printf("Player %d -- Jersey number: %d, Rating: %d\n", i, jersey[i-1], rating[i-1]);
        }
    }
    //options other than u, a, r, o, and q do nothing.
    } while(option != 'q');

    return 0;
}
// Function Definitions


