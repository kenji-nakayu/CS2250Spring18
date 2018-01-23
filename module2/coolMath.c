/*
 * =====================================================================================
 *
 *       Filename:  coolMath.c
 *
 *    Description:  To learn how to use the math library
 *
 *        Version:  1.0
 *        Created:  01/18/2018 09:39:37 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h> //sqrt(), pow(), fabs(), et cetera.
// Constants

// Function Prototypes

// Main Function
int main()
{
    //Calculate the hypotenuse of a right triangle
    double sideA = 4.0;
    double sideB = 3.0;
    double sideC;

    sideC = sqrt( ( sideA* sideA) + (sideB * sideB) );

    printf("Side A %lf, Side B %lf, Side C %lf\n", sideA, sideB, sideC);

    sideC = sqrt( pow(sideA, 2) + pow(sideB, 2) );

    printf("Side A %lf, Side B %lf, Side C %lf\n", sideA, sideB, sideC);


    return 0;
}
// Function Definitions


