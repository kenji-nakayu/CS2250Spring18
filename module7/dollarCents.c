/*
 * =====================================================================================
 *
 *       Filename:  dollarCents.c
 *
 *    Description:  Work with printing a double to two decimal places
 *
 *        Version:  1.0
 *        Created:  02/22/2018 09:34:30 PM
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
double GetInput(void);

// Main Function
int main()
{
    double cash1;
    double cash2;

    cash1 = GetInput();
    cash2 = GetInput();

    printf("Amount 1 is $%.2lf\n", cash1); //using %.2lf truncates the float after two decimal points
    printf("Amount 2 is $%.2lf\n", cash2);
    printf("Sum is $%.2lf\n", cash1 + cash2);
    
    return 0;
}
// Function Definitions

//Function GetInput captures a double input from the user
double GetInput(void)
{
    double temp;
    printf("Enter a dollar amount:\n");
    scanf("%lf", &temp);

    return temp;
}
