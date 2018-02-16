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
    //Temporary variable for using in menu options
    int temp, num;
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
        printf("\nMENU\n");
        printf("u - Update player rating\n");
        printf("a - Output players above a rating\n");
        printf("r - Replace player\n");
        printf("o - Output roster\n");
        printf("q - Quit\n");
        printf("\nChoose an option:\n");
        scanf(" %c", & option);

    //4.0) Implement the "Update player rating menu option"
    if(option == 'u')
    {
        printf("Enter a jersey number:\n");
        scanf("%d", &temp);

        num = -1;

        for(int i = 0; i < PLAYERS; ++i)
        {
            if(temp == jersey[i])
            { num = i;}
        }

        if(num == -1)
        {
            printf("Invalid jersey number\n\n");
            continue;
        }
        printf("Enter a new rating for player:\n");
        scanf("%d", &rating[num]);

    }
    //5.0) Implement the "Output players above a rating" menu option
    else if(option == 'a')
    {
        printf("Enter a rating:\n");
        scanf("%d", &temp);

        printf("\nABOVE %d\n", temp);
        for(int i = 1; i <= PLAYERS; ++i)
        {
            if(rating[i-1] > temp)
            {
            printf("Player %d -- Jersey number: %d, Rating: %d\n", i, jersey[i-1], rating[i-1]);
            }
        }
    }
    //6.0) Implement the "Replace player" menu option
    else if(option == 'r')
    {
        printf("Enter a jersey number:\n");
        scanf("%d", &temp);

        num = -1;

        for(int i = 0; i < PLAYERS; ++i)
        {
            if(jersey[i] == temp)
            {
                num = i;
            }
        }

        if(num == -1)
        {
            printf("Jersey number not in roster.\n");
            continue;
        }

        printf("Enter a new jersey number:\n");
        scanf("%d", &jersey[num]);
        printf("Enter a rating for the new player:\n");
        scanf("%d", &rating[num]);
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


