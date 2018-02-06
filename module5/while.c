/*
 * =====================================================================================
 *
 *       Filename:  while.c
 *
 *    Description:  Introduce the usage of the "while" loop.
 *
 *        Version:  1.0
 *        Created:  02/06/2018 08:50:48 AM
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
const int low = 1;
const int max = 21;
// Main Function
int main()
{
    int num = 0;
    //unsigned long long int temp[99];
    unsigned long long int factorial = 1;

    printf("Please enter an integer from %d-%d\n", low, max);
    printf(" and I will give you the factorial\n");

    scanf("%d", &num);

    while((num > max) || (num < low))
    {
        printf("Sorry, but you entered an invalid input.\n");
        printf("Please enter an integer from %d-%d\n", low, max);
        scanf("%d", &num);
    }

    for (int i = num; i >= 1; --i)
    {
        //temp[i] = factorial;
        factorial *= i;
        printf("Num is %d, Factorial is %llu\n", i, factorial);
        //if(temp[i] < temp[i + 1])
        //{
        //    printf ("Your number has overflowed and the program has broken.\n");
    //}
    }

    printf("The factorial of %d is %llu.\n", num, factorial);


    return 0;
}
// Function Definitions


