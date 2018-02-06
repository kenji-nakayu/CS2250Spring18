/*
 * =====================================================================================
 *
 *       Filename:  superbowl.c
 *
 *    Description:  Use string inputs to capture two part strings
 *
 *        Version:  1.0
 *        Created:  02/06/2018 08:36:01 AM
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

// Main Function
int main()
{
    char qbfn[50] = "";
    char qbln[50] = "";

    printf("Select a QB, ");
    printf("and I'll tell you number of Super bowl wins: \n");
    printf("Tom Brady\n");
    printf("Peyton Manning\n");
    printf("Eli Manning\n");
    printf("None\n");
    // take input

    scanf("%s", qbfn); // Requires 1 input
    // scanf("%s %s", qbfn, qbln); // requires 2 inputs
    if (strcmp(qbfn, "None") == 0)
    {
        printf("No Super Bowls\n");
    }
    else
    {scanf(" %s", qbln);
        printf("Hello %s %s\n", qbfn, qbln);

    }

    return 0;
}
// Function Definitions


