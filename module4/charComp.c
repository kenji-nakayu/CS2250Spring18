/*
 * =====================================================================================
 *
 *       Filename:  charComp.c
 *
 *    Description:  Learn operations on characters
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:43:37 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h> // Used for character operations
// Main Function
int main()
{
    char num;
    printf("Enter a number 0-9:\n");
    scanf("%c", &num);

    if(num == '0')
    {
        printf("You entered zero [0]\n");
    }
    else
    {
        printf("You entered non-zero [%c]\n", num);
    }
    //test for alpha values.
    if( isalpha(num) )
    {
        printf("It is alpha.\n");
    }
    //test for numeric values.
    else if( isdigit(num) )
    {
        printf("It is numeric.\n");
    }
    //test for alpha-numeric characters.
    //if( isalnum(num) )
    //{
    //    printf("It is alpha-numeric.\n");
    //}
    else {
        printf("You entered [%c].\n", num);
    }




    return 0;
}
// Function Definitions


