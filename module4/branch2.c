/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description:  Test for race medals
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

    if(pos <= 0){
        printf("You placed %d. You cheated! You don't get any medals!\n", pos);
    }
    else if(pos == 1){
        printf("You placed %d. You get the gold medal!\n", pos);
    }
    else if(pos == 2){
        printf("You placed %d. You get the silver medal!\n", pos);
    }
    else if(pos == 3){
        printf("You placed %d. You get the bronze medal!\n", pos);
    }
    else{
        printf("You placed %d. You don't get a medal.\n", pos);
    }


    return 0;
}
// Function Definitions


