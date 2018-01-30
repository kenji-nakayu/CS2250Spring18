/*
 * =====================================================================================
 *
 *       Filename:  branch1.c
 *
 *    Description:  Basics of branching
 *
 *        Version:  1.0
 *        Created:  01/30/2018 08:52:05 AM
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
    int age = 0;

    printf("Enter your age:\n");
    scanf("%d", &age);

    printf("Age is %d\n", age);

    if(age >= 18) {
        printf("You can vote!\n");
    }
    else {
        printf("You have %d years until you can vote.\n", 18 - age);
    }
    if(age >= 21){
        printf("You can buy alcohol...\n");
    }
    else {
        printf("You have %d years until you can buy alcohol...\n", 21 - age);
    }
    if(age >= 65){
        printf("You may qualify for Social Security income!\n");
    }
    else {
        printf("You have %d years until you may qualify for Social Security income.\n", 65 - age);
    }
    if(age == 35){
        printf("Your age is the selected special case.\n");
    }
    else if (age < 35){
        printf("You have %d years until special case.\n", 35 - age);
    }
    else {
        printf("It has been %d years since special case.\n", age - 35);
    }

    printf("Program is finished\n");

    return 0;
}
// Function Definitions


