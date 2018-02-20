/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Take two numbers (double) from the user
 *                  Define the following functions:
 *                  1) TheSum: Returns the (int)sum of the two numbers
 *                  2) TheProd: Returns the (double)product of the two numbers
 *
 *        Version:  1.0
 *        Created:  02/20/2018 09:31:54 AM
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
char Menu(void);
int TheSum(double n1, double n2);
double TheProd(double n1, double n2);

// Main Function
int main()
{
    double num[2];

    //Capture user input
    for(int i = 0; i < 2; ++i)
    {
        printf("Enter a double:\n");
        scanf("%lf", &num[i]);
    }

    char input = Menu();
    //Call TheSum
    if( (input == 's') || (input == 'b') )
    {
    printf("The int sum of %lf and %lf is %d.\n", 
            num[0], num[1], TheSum(num[0], num[1]));
    }
    
    //Call TheProd
    if( (input == 'p') || (input == 'b') )
    {
    printf("The product of %lf and %lf is %lf.\n", 
            num[0], num[1], TheProd(num[0], num[1]));
    }

    return 0;
}
// Function Definitions

//Function TheSum returns an integer sum of two double parameters
int TheSum(double n1, double n2)
{
    return (int)(n1 + n2);
}

//Function TheProd returns a double product of two double parameters
double TheProd(double n1, double n2)
{
    return n1 * n2;
}

//Function Menu returns the char for option of what to be done.
char Menu(void)
{
    char opt;

    do
    {
        printf("What would you like to do?:\n\ts) TheSum\n\tp) TheProd\n\tb) Both\n");
        scanf(" %c", &opt);
        if(!((opt == 'p') || (opt == 's') || (opt == 'b')))
        {
            printf("Sorry, you entered an invalid input.\n");
        }
    } while (!((opt == 'p') || (opt == 's') || (opt == 'b')));

    return opt;
}

//The program could be adjusted to use a switch statement 
//instead of the if statements currently present for the functions.
