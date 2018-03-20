/*
 * =====================================================================================
 *
 *       Filename:  testDude.c
 *
 *    Description:  Pass structure parameters to functions
 *
 *        Version:  1.0
 *        Created:  03/20/2018 08:44:35 AM
 *       Revision:  none
 *       Compiler:  gcc
 *       compiled with command
 *       gcc testDude.c Dude.c -o testDude.out
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "Dude.h"


// Main Function
int main()
{
    struct Dude man1;
    man1.age = 22; //Use the dot . operator to access members of struct
    man1.weight = 175.2;

    ShowInfo(man1.age, man1.weight);

    SuperDude man2;
    man2.age = 19;
    man2.weight = 199.9;
    man2.sex = 'M';

    ShowInfoStruct(man2);

    return 0;
}
