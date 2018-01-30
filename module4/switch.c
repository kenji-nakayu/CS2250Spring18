/*
 * =====================================================================================
 *
 *       Filename:  switch.c
 *
 *    Description:  Test for race medals using switch statements.
 *           Note:  Switch statements only work for integers and characters (type int or type char)
 *           
 *        Version:  1.0
 *        Created:  01/30/2018 09:31:23 AM
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
    int pos = 0;
    printf("What is your position?\n");
    scanf("%d", &pos);

    switch(pos){

    case 1:
        printf("You placed %d. You get the gold medal!\n", pos);
        break;

    case 2:
        printf("You placed %d. You get the silver medal!\n", pos);
        break;

    case 3:
        printf("You placed %d. You get the bronze medal!\n", pos);
        break;
    case 14:
    case 28:
    case 37:
        printf("You placed %d. You get the plastic medal!\n", pos);
        break;

    default:
        printf("You placed %d. You don't get a medal.\n", pos);
    }

    return 0;
}
// Function Definitions


