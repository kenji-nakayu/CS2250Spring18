/*
 * =====================================================================================
 *
 *       Filename:  chars.c
 *
 *    Description:  Practice usage of the variable type char
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:51:13 AM
 *       Revision:  none
 *       Compiler:  gcc chars.c -o chars
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
    /*const char ampersand = '&';
    const char percent = '\%';

    printf("%c%c\n", ampersand, percent);

    return 0;*/
    
    char input;

    int age;
    printf("Do you like to code?:\n");
    scanf("%c", &input);
    printf("1) You entered [%c]\n", input);
    
    printf("Do you really like to code?:\n");
    //Use an empty space before %c in the scanf
    //This will take care of whitespace characters (such as enter)
    scanf(" %c", &input);
    printf("2) You entered [%c]\n", input);
    printf("3) You entered [%c]\n", input);
    
    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("Your age is [%d]\n", age); 

    return 0;
}
// Function Definitions


